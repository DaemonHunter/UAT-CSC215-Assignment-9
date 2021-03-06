// 09 Assignment - Using References to hack and Bankrupting the terrorists

#include "pch.h"
#include <iostream>

using namespace std;
// function prototype (declaration)
void normalTransaction(int x, int y);

// function prototype (declaration)
void hackedTransaction(int& x, int& y);

// main function
int main()
{
	// Joes Coffee Shop Account Balance
	int joesCoffeeShopAccount = 12;

	// Terrorist Account Balance
	int terroristAccount = 97349739;

	cout << "          Bank of Terror" << endl;
	cout << "------------------------------------" << endl;
	cout << "------------------------------------" << endl;
	cout << "\n         Account Balances" << endl;
	cout << "____________________________________\n" << endl;
	cout << "Joes Coffee Shop Account: $" << joesCoffeeShopAccount << endl;
	cout << "Terrorist Account:        $" << terroristAccount << "\n\n"<< endl;

	cout << "Calling normalTransaction()\n";
	
	// Call the function normalTransaction with the integers <joesCoffeeShopAccount> and <terroristAccount>
	normalTransaction(joesCoffeeShopAccount, terroristAccount);

	cout << "Joes Coffee Shop Account: $" << joesCoffeeShopAccount << "\n";
	cout << "Terrorist Account:        $" << terroristAccount << "\n\n";
	cout << "Calling hackedTransaction()\n";

	// Call the function hackedTransaction with the integers <joesCoffeeShopAccount> and <terroristAccount>
	hackedTransaction(joesCoffeeShopAccount, terroristAccount);

	cout << "Joes Coffee Shop Account: $" << joesCoffeeShopAccount << "\n";
	cout << "Terrorist Account:        $" << terroristAccount << "\n";

	// Return a value of 0
	return 0;
}

// Function definition
void normalTransaction(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

// Function definition
void hackedTransaction(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}