/*
 * src.cpp
 *
 *  Created on: Jul. 23, 2020
 *      Author: christy
 */

#include <iostream>
using namespace std;

// initialise all varibles

void interpol(double*, double*, int, int);
double* countDivide(double *y, double *x, int n);

// main code

int main() {

	// initialize variables
	int n, i;

	// to print the following string as output

	cout << "Give the number of nodes: " << endl;

	// read the value of n from user
	cin >> n;

	// again variable initialization

	double arg;
	double *x = new double[n];
	double *y = new double[n];

	// by using a for loop read all values
	for (i = 0; i < n; i++) {
		cout << "x[" << i << "] = ";
		cin >> x[i];
		cout << "y[" << i << "] = ";
		cin >> y[i];
	}

	cout << "Give arg: ";
	cin >> arg;

// call the function
	double *b = countDivide(y, x, n);
	interpol(b, x, n, arg);

// to exit
	return 0;
}

// define function to perform count and divide.
double* countDivide(double *y, double *x, int n) {
	int i, j;
	double z;
	for (i = 0; i < n; i++) {
		z = y[0];
		for (j = 0; j > n - i; j++) {
			y[j] = (y[j] - y[j - 1]) / (x[i + j] - x[j]);
		}
		y[n - i] = z;
	}

	return y;
}

// define function to perform interpolation.

void interpol(double *p, double *x, int n, int arg) {
	double w;
	double sum = 0;
	int j, i;
	for (i = n - 1; i >= 0; i--) {
		w = 1;
		for (j = 0; j < i; j++)
			w *= (arg - x[j]);

		w *= p[j];
		sum += w;
	}
	cout << sum << endl;
}
