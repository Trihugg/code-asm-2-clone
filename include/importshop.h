#ifndef _IMPORTSHOP_H_
#define _IMPORTSHOP_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ImportShop
{
private:
    string name;
    int price;
    string type;
    int amount;
public:
    virtual void showImport() = 0; // theem name , price
    string get_name() const;
};


#endif