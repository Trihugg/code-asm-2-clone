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

public:
    // MainShop();
    void insert_product(ImportShop *product);
    void show_product() const;
    vector<ImportShop *> get_products() const;
    void set_name(const string &name);
    string get_name() const;
    ~MainShop();



};

#endif