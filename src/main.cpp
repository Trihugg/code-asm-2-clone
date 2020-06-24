#include <iostream>

#include "../include/adaptershop.h"
#include "../include/importshop.h"
#include "../include/mainshop.h"

int main(int argc, char *argv[])
{
	string name, type;
	int price, amount;
	cout << "Name: ";
	cin >> name;
	cout << "Price: ";
	cin >> price;
	cout << "Type: ";
	cin >> type;
	cout << "quantity entered into stock : ";
	cin >> amount;

	cout << "=============" << endl;
	ImportShop *newitem = new AdapterShop(name, price, type, amount);
	MainShop abc("Fash Shop");
	abc.insert_product(newitem);
	abc.show_product();
}