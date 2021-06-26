/*
 * src.cpp
 *
 *  Created on: Jun. 26, 2021
 *      Author: christy
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int n;
	cin >> n;
	int integerValue;

	vector<int> SortVectors;

	for (int i = 0; i < n; i++) {
		cin >> integerValue;
		SortVectors.push_back(integerValue);
	}

	sort(SortVectors.begin(), SortVectors.end());

	for (int i = 0; i < n; i++) {
			cout << SortVectors[i] << " ";
	}
	return 0;
}

