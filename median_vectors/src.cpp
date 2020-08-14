/*
 * src.cpp
 *
 *  Created on: Aug. 13, 2020
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
	while (cin >> token) {
		myarr.push_back(token);
	}
	cout << endl << endl;

	/* print integers from vector */
	cout << "Your integers are:" << endl;

	for (vector<int>::size_type j = 0; j != myarr.size(); ++j) {
		cout << myarr[j] << endl;
	}
	cout << endl;

	/* find the largest element, manually */
	int max = myarr[0];
	int next;
	vector<int>::size_type i = 1;

	// store the largest number in max after comparing with each element
	while (i != myarr.size()) {
		next = myarr[i];
		if (max < next) {
			max = next;
		}
		++i;
	}

	/* find median */
	float median;
	// first sort the array to find the median
	sort(myarr.begin(), myarr.end());

	// check the number of elements in array is even or add
	// if it is odd, add the 2 numbers in the middle and divide by 2
	// else the middle number is the median in the sorted array

	if ((myarr.size() % 2) == 0)
		median = (myarr[myarr.size() / 2] + myarr[(myarr.size() / 2) - 1])/2.0;
	else
		median = myarr[(myarr.size() / 2)];

	cout << endl << "... and the median is: " << median << endl << endl;

return 0;
}

