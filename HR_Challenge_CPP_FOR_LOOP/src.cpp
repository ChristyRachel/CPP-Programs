/*
 * src.cpp
 *
 *  Created on: Jun. 1, 2021
 *      Author: christy
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	const char *numbers[9] = { "one", "two", "three", "four", "five", "six",
			"seven", "eight", "nine" };

	for (int i = a; i <= b; i++)
	{
		if (i <= 9)
			cout << numbers[i - 1] << endl;
		else
		{
			if ((i % 2) == 0)
				cout << "even" << endl;
			else
				cout << "odd" << endl;
		}
	}
return 0;
}

