#include <iostream>
#include <string>
#include "All_c.h"

using namespace std;

void display_info();

int main()
{
	All_c Customers;
	string input;
	while (true)
	{
		display_info();
		getline(cin, input);
		try
		{
			int num = stoi(input);
			switch (num)
			{
			case 1:
			{
				Customers.addCustomer(0);
				break;
			}
			case 2:
			{
				Customers.editCustomer();
				break;
			}
			case 3:
			{
				Customers.deleteCustomer();
				break;
			}
			case 4:
			{
				Customers.displayCustomers();
				break;
			}
			case 5:
			{
				cout << "Goodbye!";
				exit(0);
				break;
			}
			default:
			{
				cout << "Bad input. Write a number (1-5)" << endl;
			}
			}
		}
		catch (invalid_argument const& e)
		{
			cout << "Bad input. Write a number (1-5)" << endl;
		}
	}
}

void display_info()
{
	cout << "Select option:" << endl;
	cout << "1. Add customer" << endl;
	cout << "2. Edit customer" << endl;
	cout << "3. Delete customer" << endl;
	cout << "4. List customer" << endl;
	cout << "5. Exit" << endl;
}