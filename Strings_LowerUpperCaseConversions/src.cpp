/*
 * src.cpp
 *
 *  Created on: Jul. 1, 2021
 *      Author: christy
 */

#include <iostream>
#include <iostream>

using namespace std;

string UpperToLower(string s) {
	for (unsigned int i = 0; i < s.size(); i++) {
		s[i] += 32;
	}
	cout << s << endl;
	return s;
}

string LowerToUpper(string s) {
	for (unsigned int i = 0; i < s.size(); i++) {
		s[i] -= 32;
	}
	cout << s << endl;
	return s;
}

int main() {

	string UpperCase = "";
	string LowerCase = "";

	cout << "Tye the uppercase word to convert: ";
	getline(cin, UpperCase);

	cout << "Tye the lowercase word to convert: ";
	getline(cin, LowerCase);

	cout << "The converted ones are: " << endl;
	UpperToLower(UpperCase);
	LowerToUpper(LowerCase);

	return 0;
}

