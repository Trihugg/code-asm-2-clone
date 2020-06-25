#ifndef _MAIN_H_
#define _MAIN_H_

#include <iostream>
#include <string>
#include <vector>

#include "adaptershop.h"
#include "product.h"
#include "mainshop.h"
#include "importshop.h"

using namespace std;

class Menu
{
private:
    vector <MainShop *> shops;
public:
    void run();
    ~Menu();
private:
    void print_menu() const;
    void do_task(const int &choice);
    void add_item();
    int get_choice() const;
    void delete_item();
    void print_all();


};


#endif