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
    MainShop(const string &name);
    void insert_product(ImportShop *product);
    void show_product() const;
    ~MainShop();
};

#endif