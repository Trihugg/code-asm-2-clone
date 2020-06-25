#ifndef _MAINSHOP_H_
#define _MAINSHOP_H_

#include <iostream>
#include <string>
#include <vector>

#include "./product.h"
#include "./adaptershop.h"

using namespace std;

class MainShop
{
private:
    string name;
    vector<ImportShop *> products;
    vector<Product *> pros;

public:
    MainShop(const string &name);
    void insert_product(ImportShop *product);
    void insert_pro(Product *pro);
    void show_product() const;
    vector<ImportShop *> get_products() const;
    void set_name(const string &name);
    string get_name() const;
    ~MainShop();
    vector<Product *> get_pros() const;
};

#endif