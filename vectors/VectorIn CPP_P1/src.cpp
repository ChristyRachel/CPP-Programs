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

	for (unsigned int i = 0; i < VectorOfIntegers.size(); i++) {
		cout << VectorOfIntegers[i] << endl;
	}

	return 0;
}
