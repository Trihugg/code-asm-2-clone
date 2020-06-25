#ifndef _ADAPTERSHOP_H_
#define _ADAPTERSHOP_H_

#include "./product.h"
#include "./importshop.h"

using namespace std;

class AdapterShop : public ImportShop, private Product
{
private:

public:
    AdapterShop(const string &name, const int &price, const string &type, const int &amount);
    void showImport();
    string get_name() const;
};

#endif