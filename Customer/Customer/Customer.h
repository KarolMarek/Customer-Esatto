#ifndef CUSTOMER_H_ 
#define CUSTOMER_H_

#include <iostream>
#include <string>

using namespace std;

class Customer
{
	string name;
	string VAT_nr;
	string cre_time;
	string address;
public:
	Customer(string, string, string, string);
	void display_info(int);
};

#endif
