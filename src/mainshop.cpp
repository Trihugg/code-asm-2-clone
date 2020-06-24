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