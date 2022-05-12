#ifndef ALL_C_H_ 
#define ALL_C_H_ 

#include <iostream>
#include "Customer.h"
#include <vector>

class All_c
{
	vector<Customer> myCustomers;
public:
	void addCustomer(int);
	void displayCustomers();
	void deleteCustomer();
	void editCustomer();
};

#endif