/*
 * src.cpp
 *
 *  Created on: Jun. 19, 2021
 *      Author: christy
 */

#include <vector>
#include <iostream>
using namespace std;

int main() {
    // declare and initialize array
    vector<vector<int>> jagged_array = {{1,2,3}, {4,5},{6,7,8,9,1,2,3}};


    // print content of array
    for (auto i : jagged_array){
    	for(auto j: i)
    		cout << j << " ";
    	cout << "\n";
    }

    return 0;
}
