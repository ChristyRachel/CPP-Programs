/*
 * src.cpp
 *
 *  Created on: Jun. 14, 2021
 *      Author: christy
 */

#include <iostream>
using namespace std;

void show_menu() {
	cout << "*******MENU*******" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "******************" << endl;
}

int main() {

	int option;
	double balance = 1000;
	double deposit;
	double withdraw;

	show_menu();
	cout << "Select an option from these" << endl;

while(cin >> option){
	switch (option) {
	case 1:
		cout << "Your Balance is " << balance << "Rs." << endl;
		break;
	case 2:
		cout << "Enter the Deposit Amount: " << endl;
		cin >> deposit;
		cout << "Your Current Balance is " << (balance + deposit) << endl;
		break;
	case 3:
		cout << "Withdrawal Amount: " << endl;
		cin >> withdraw;
		if (balance > withdraw)
			cout << "Your Current Balance is " << (balance - withdraw) << endl;
		else
			cout << "You don't have enough balance. Sorry!";
		break;
	default:
		cout << "Invalid Option. Choose one from the above list."<< endl;
	}
}
	return 0;
}

