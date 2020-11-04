/*
 * src.cpp
 *
 *  Created on: Nov. 2, 2020
 *      Author: christy
 */


/*
 * Given a positive integer n, do the following:
 * If 1<=n<=9, print the lowercase English word corresponding to the number
 * (e.g., one for 1, two for 2, etc.).
 * If n>9, print Greater than 9.
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (n==1)
    	cout << "one" << endl;
    else if (n==2)
	cout << "two" << endl;
    else if (n==3)
    	cout << "three" << endl;
    else if (n==4)
    	cout << "four" << endl;
    else if (n==5)
    	cout << "five" << endl;
    else if (n==6)
    	cout << "six" << endl;
    else if (n==7)
    	cout << "seven" << endl;
    else if (n==8)
    	cout << "eight" << endl;
    else if (n==9)
    	cout << "nine" << endl;
    else
    	cout << "Greater than 9";


    return 0;
}



