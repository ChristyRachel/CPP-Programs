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

	cout << endl << "... and your largest integer is: " << max << endl << endl;

	/* find the smallest element, manually */
	int min = myarr[0];
	int nextmin;
	vector<int>::size_type j = 1;

	// store the smallest number in min after comparing with each element
	while (j != myarr.size()) {
		nextmin = myarr[j];
		if (min > nextmin) {
			min = nextmin;
		}
		++j;
	}
	cout << endl << "... and your smallest integer is: " << min << endl << endl;

	/* find the average, manually */
	float avg = 0;
	float sum = 0;
	vector<float>::size_type k = 0;

	//find the sum using loop and then the average
	while (k != myarr.size()) {
		sum = sum + myarr[k];
		++k;
	}
	avg = sum / myarr.size();

	cout << endl << "... and the average is: " << avg << endl << endl;

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


	cout << "TRYING USING BUILT IN FUNCTIONS" << endl << endl;

	cout << "and the sorted array is ";
	// built-in function to sort array and print it using for loop
	sort(myarr.begin(), myarr.end());
	for (auto s : myarr)
		cout << s << " ";
	// built-in function to find the maximum of an array
	int maximum = *max_element(myarr.begin(), myarr.end());
	cout << endl << "and the largest element is " << maximum << endl;

	// built-in function to find the minimum of an array
	int minimum = *min_element(myarr.begin(), myarr.end());
	cout << endl << "and the smallest element is " << minimum << endl;

	/* exit happily */
	return 0;
}
