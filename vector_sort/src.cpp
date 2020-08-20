/*
 * src.cpp
 *
 *  Created on: Aug. 19, 2020
 *      Author: christy
 */

/*
 * src.cpp
 *
 *  Created on: Aug. 3, 2020
 *      Author: christy
 */

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

/*
 * main code begins
 */

int main() {
	/* store integers in a vector from standard input */
	vector<int> myarr;	// our container
	int token; 			// our container content variable

	cout << "Please enter some integers, followed by <CTRL><D>:" << endl;

	// loop exits when user enters <CTRL><D>
	while (cin >> token){
		myarr.push_back(token);
	}
	cout << endl << endl;

	/* print integers from vector */
	cout << "Your integers are:" << endl;

	for (vector<int>::size_type j = 0; j != myarr.size(); ++j)
	{
		cout << myarr[j] << endl;
	}
	cout << endl;


	cout << "and the sorted array is ";
	// built-in function to sort array and print it using for loop
	sort(myarr.begin(), myarr.end());
	for (auto s : myarr)
		cout << s << " ";

	/* exit happily */
	return 0;
}



