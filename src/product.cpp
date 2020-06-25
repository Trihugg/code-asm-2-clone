#include "../include/mainshop.h"

using namespace std;

Product::Product(const string &name, const int &price, const string &type, const int &amount)
{
    this->name = name;
    this->price = price;
    this->type = type;
    this->amount = amount;
}

void Product::show_info()
{
    cout << "----------------------" << endl;
    cout << "Name of item : " << name << endl;
    cout << "price: " << price * 23000 << " vnd" << endl;
    cout << "Type: " << type << endl;
    cout << "amount in stock: " << amount << " items" <<endl;
}

string Product::get_name() const{
    return name;
}