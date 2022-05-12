#include "All_c.h"
#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

void All_c::addCustomer(int index)
{
	string name;
	string VAT_nr;
	string address;
	char tmBuff[26];
	cout << "----------------------------" << endl;
	cout << "Enter a name:" << endl;
	getline(cin, name);
	cout << "Enter the VAT identification number:" << endl;
	getline(cin, VAT_nr);
	cout << "Enter an address:" << endl;
	getline(cin, address);

	auto start = std::chrono::system_clock::now();
	auto legacyStart = std::chrono::system_clock::to_time_t(start);
	ctime_s(tmBuff, sizeof(tmBuff), &legacyStart);
	string cre_time = string(tmBuff);

	Customer c(name, VAT_nr, cre_time, address);
	if (index == 0)
		myCustomers.push_back(c);
	else
		myCustomers[index-1] = c;
	cout << "----------------------------" << endl;
}

void All_c::displayCustomers()
{
	int i = 1;
	cout << "----------------------------" << endl;
	for (Customer c : myCustomers)
	{
		c.display_info(i);
		i++;
	}
	cout << "----------------------------" << endl;
}

void All_c::deleteCustomer()
{
	string input;
	cout << "----------------------------" << endl;
	cout << "Enter the customer's number you want to delete" << endl;
	getline(cin, input);
	try
	{
		int num = stoi(input);
		if (num <= myCustomers.size() && num > 0)
			myCustomers.erase(next(myCustomers.begin(), num-1));
		else
			cout << "No customer found" << endl;
	}
	catch (invalid_argument const& e)
	{
		cout << "Bad input. Write a number." << endl;
	}
	cout << "----------------------------" << endl;
}

void All_c::editCustomer()
{
	string input;
	cout << "----------------------------" << endl;
	cout << "Enter the customer's number you want to edit" << endl;
	getline(cin, input);
	try
	{
		int num = stoi(input);
		if (num <= myCustomers.size() && num > 0)
			this->addCustomer(num);
		else
			cout << "No customer found" << endl;
	}
	catch (invalid_argument const& e)
	{
		cout << "Bad input. Write a number." << endl;
	}
	cout << "----------------------------" << endl;
}
