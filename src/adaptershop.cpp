#include "../include/adaptershop.h"

using namespace std;

AdapterShop::AdapterShop(const string &name, const int &price, const string &type, const int &amount) : 
 Product(name, price/2 , type + " Second Hand", amount) {
     cout << "Get List Items Update." << endl;
 }

void AdapterShop::showImport()
{
    show_info();
}

