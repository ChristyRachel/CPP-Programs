/*
 * src.cpp
 *
 *  Created on: Jun. 19, 2021
 *      Author: christy
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {

	/* vector format
	 vector <dataType> vactorName
	 */

	vector<int> VectorOfIntegers;

	//vectorName_push.back -> adds an element to the end of the vector
	VectorOfIntegers.push_back(5);
	VectorOfIntegers.push_back(3);
	VectorOfIntegers.push_back(6);
	VectorOfIntegers.push_back(1);
	VectorOfIntegers.push_back(9);
	VectorOfIntegers.push_back(8);

	cout << "Vectors: " << endl;
	cout << endl;
	for (unsigned int i = 0; i < VectorOfIntegers.size(); i++) {
		cout << VectorOfIntegers[i] << endl;
	}
	cout << endl;

	//insert a value inside the current vector

	VectorOfIntegers.insert(VectorOfIntegers.begin() + 2, 105);

	cout << "Vectors after insertion" << endl;
	cout << endl;
	for (unsigned int i = 0; i < VectorOfIntegers.size(); i++) {
		cout << VectorOfIntegers[i] << endl;
	}
	cout << endl;

	//remove a value inside the current vector

	VectorOfIntegers.erase(VectorOfIntegers.begin() + 2);

	cout << "Vectors after clearing an element" << endl;
	cout << endl;
	for (unsigned int i = 0; i < VectorOfIntegers.size(); i++) {
		cout << VectorOfIntegers[i] << endl;
	}
	cout << endl;

	// usage of empty function in vectors
	if (VectorOfIntegers.empty())
		cout << "It is empty" << endl;
	else
		cout << "It is not empty" << endl;

// usage of clear function in vectors

	VectorOfIntegers.clear();

	if (VectorOfIntegers.empty())
		cout << "It is empty" << endl;
	else
		cout << "It is not empty" << endl;

	return 0;
}
