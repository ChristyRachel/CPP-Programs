/*
 * src.cpp
 *
 *  Created on: Aug. 12, 2020
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


	// built-in function to find the maximum of an array
	int maximum = *max_element(myarr.begin(), myarr.end());
	cout << endl << "and the largest element is " << maximum << endl;

	// built-in function to find the minimum of an array
	int minimum = *min_element(myarr.begin(), myarr.end());
	cout << endl << "and the smallest element is " << minimum << endl;

	/* exit happily */
	return 0;
}

