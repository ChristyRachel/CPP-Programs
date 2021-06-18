/*
 * src.cpp
 *
 *  Created on: Jun. 18, 2021
 *      Author: christy
 *      credits: Geeks for Geeks
 */

#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void binary_numbers(int n)
{
	for (int i = 1 << 10; i > 0; i = i / 2) {
		if ((n & i) > 0)
			cout << "1";
		else
			cout << "0";
	}
}

int main() {
	int n;
	cin >> n;
	binary_numbers(n);
	return 0;
}
