#include "../include/menu.h"
#include "../include/adaptershop.h"
#include "../include/importshop.h"
#include "../include/mainshop.h"
#include "../include/product.h"

using namespace std;

void Menu::run()
{
    bool running = true;
    string name;
    cout << "Name shop: ";
    fflush(stdin);
    getline(cin, name);
    MainShop *shop = new MainShop(name);
    shops.push_back(shop);
    while (running)
    {
        print_menu();
        int choice = get_choice();
        do_task(choice);
        if (choice == 4)
            running = false;
    }
}

void Menu::print_menu() const
{
    cout << shops[0]->get_name() << endl;
    cout << "1. Add items " << endl;
    cout << "2. Print all items" << endl;
    cout << "3. Delete items" << endl;
    cout << "4. Exit " << endl;
}

int Menu::get_choice() const
{
    int choice;
    cout << "your choice : ";
    cin >> choice;
    return choice;
}

void Menu::do_task(const int &choice)
{
    switch (choice)
    {
    case 1:
        add_item();
        break;
    case 2:
        print_all();
        break;
    case 3:
        delete_item();
        break;
    case 4:
        cout << "Exit";
        break;
    default:
        cout << "Invalid input. Re-input: ";
        break;
    }
}

void Menu::add_item()
{
    string name, type;
    int price, amount;
    cout << "Name: ";
    cin >> name;
    cout << "Price: ";
    cin >> price;
    cout << "Type: ";
    cin >> type;
    cout << "quantity entered into stock :";
    cin >> amount;
    cout << "=============" << endl;
    ImportShop *newitem = new AdapterShop(name, price, type, amount);
    shops[0]->insert_product(newitem);
}

void Menu::print_all()
{
    for (int i = 0; i < shops[0]->get_products().size(); i++)
    {
        cout << i + 1 << " .";
        shops[0]->get_products()[i]->showImport();
    }
}

Menu::~Menu()
{
    for (int i = 0; i < shops[0]->get_products().size(); i++)
    {
        delete shops[0]->get_products()[i];
    }
    delete shops[0];
}

void Menu::delete_item()
{
    string name;
    cout << "name of item you want delete :  ";
    // fflush(stdin);
    cin >> name;
    // cout << "added" << endl;
    vector<ImportShop*>products = shops[0]->get_products();
    cout <<shops[0]->get_products().size() << endl;
    cout << products.size() << endl;
    for (int i = 0; i < products.size(); i++)
    {
        // cout << (shops[0]->get_products())[i]->get_name() << endl;
        // cout << "avcccc";
        cout << "Name: " << products[i]->get_name();
        if (products[i]->get_name() == name)
        {
            products.erase(shops[0]->get_products().begin() + i);
            return;
        }
    }
    cout << "can't not find items in shop" << endl;
}


// void Menu::delete_item()
// {
//     string name;
//     cout << "item u want delete : " << endl;
//     cin >> name;

//     vector<Product *> pros = shops[0] -> get_pros();
//     cout<<pros[0]->get_name()<<endl;
//     //cout <<"a" <<endl;
//     for(int i = 0; i < pros.size(); i ++)
//     {
//         cout<<pros[i]->get_name()<<endl;
//         if (((shops[0]->get_pros())[i]->get_name()) == name)
//         {
//             cout << "abc" << endl;
//             (shops[0]->get_pros()).erase(shops[0]->get_pros().begin() + i);
//             return;
//         }
//     }
//     cout << "can't not find items to delete" << endl;
// }