#include "Customer.h"
#include <iostream>

using namespace std;

Customer::Customer(string name, string VAT_nr, string cre_time, string address)
{
	this->name = name;
	this->VAT_nr = VAT_nr;
	this->cre_time = cre_time;
	this->address = address;
}

void Customer::display_info(int i)
{
	cout << i << "   " << name << endl;
	cout << "    " << VAT_nr << endl;
	cout << "    " << cre_time;
	cout << "    " << address << endl;
}

