/*
 * map.cpp
 *
 *  Created on: Jun. 10, 2021
 *      Author: christy
 */

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	std::map<std::string, int> map_name;

	//add some items to the map
	map_name["cat"] = 5;
	map_name["dog"] = 2;
	map_name["horse"] = 4;
	map_name["fish"] = 3;

	cout << map_name["cat"] << endl;

	//now loop through all of the key-value pairs
	//in the map and print them out
	for (auto item : map_name) {
		//item.first is the key
		std::cout << item.first << " goes ";

		//item.second is the value
		std::cout << item.second << std::endl;
	}

	//finally, look up the sound of a cat
	std::cout << "What is the sound of a cat? " << map_name["cat"] << std::endl;

	return 0;
}
