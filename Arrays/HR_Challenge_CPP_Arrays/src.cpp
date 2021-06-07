/*
 * src.cpp
 *
 *  Created on: Jun. 7, 2021
 *      Author: christy
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;
	int array[n];

	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	for (int j = (n - 1); j >= 0; j--) {
		cout << array[j] << " ";
	}

	return 0;
}
