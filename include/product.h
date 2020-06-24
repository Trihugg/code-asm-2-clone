#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product
{
private:
    string name;
    int price;
    string type;
    int amount;
public:
    Product(const string &name, const int &price, const string &type, const int &amount);
    void show_info();
};


#endif