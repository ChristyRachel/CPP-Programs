#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

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

