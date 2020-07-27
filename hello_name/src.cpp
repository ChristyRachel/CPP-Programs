/*
 * src.cpp
 *
 *  Created on: Jul. 26, 2020
 *      Author: christy
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "please enter your name: ";
	cin >> name;
	cout << "Hello, " << name << "! " << "Your name has " << name.size() << " characters." << std::endl;

	return 0;
}
