/*
 * src.cpp
 *
 *  Created on: Nov. 2, 2020
 *      Author: christy
 */

// code to learn cin.ignore function
#include <iostream>
#include <string>
using namespace std;

int main() {
	int age = 0;
	string name, favorite_subject, favorite_coding_language;

	cout << "Enter the name \n";
	getline(cin, name);

	cout << "Enter the favorite subject \n";
	getline(cin, favorite_subject);

	cout << "Enter the favorite coding_language \n";
	getline(cin, favorite_coding_language);

	cout << "Enter the age \n";
	cin >> age;
	cin.ignore();

	cout << "\n\n" << name << "'s favorite subject is " << favorite_subject
			<< " and the favorite coding language is "
			<< favorite_coding_language << " at the age of " << age;

	return 0;
}
