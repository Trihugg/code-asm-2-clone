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
    shop->set_name(name);
    while (running)
    {
        print_menu();
        int choice = get_choice();
        do_task(choice);
        if(choice == 3) running = false;
    }
    
}

void Menu::print_menu() const
{
    cout << shop->get_name() << endl;
    cout << "1. Add items " << endl;
    cout << "2. Print all items" << endl;
    cout << "3. Exit " << endl;
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
	cout << "quantity entered into stock : ";
	cin >> amount;
    cout << "=============" << endl;
    ImportShop *newitem = new AdapterShop(name, price, type, amount);
	shop->insert_product(newitem);
	
}


void Menu::print_all()
{
    for(int i = 0; i < shop->get_products().size(); i++)
    {
        cout << i+1 << " .";
        shop->get_products()[i] -> showImport();
    }
}

Menu::~Menu()
{
    for(int i = 0; i< shop->get_products().size(); i++)
    {
        delete shop->get_products()[i];
    } 
    delete shop;
}