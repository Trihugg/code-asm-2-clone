#include "../include/mainshop.h"
#include <vector>

using namespace std;

MainShop::MainShop(const string &name)
{
    this->name = name;
}

void MainShop::insert_product(ImportShop *product)
{
    products.push_back(product);
    cout << "Insert completed" << endl;
}

void MainShop::insert_pro(Product *pro)
{
    pros.push_back(pro);
    cout << "Insert completed" << endl;
}



void MainShop::show_product() const
{
    cout << "Shop: " << name << endl;
    for (int i = 0; i < products.size(); i++)
    {
        products[i]->showImport();
    }
}

MainShop::~MainShop()
{
    for (int i = 0; i < products.size(); i++)
    {
        delete products[i];
    }
}

vector<ImportShop *> MainShop::get_products() const
{
    return products;
}

void MainShop::set_name(const string &name) {
    this-> name = name;
}

string MainShop::get_name() const {
    return name;
}

vector<Product *> MainShop::get_pros() const
{
    return pros;
}