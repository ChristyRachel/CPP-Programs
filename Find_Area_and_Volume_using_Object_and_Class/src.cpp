/*
 * src.cpp
 *
 *  Created on: Mar. 28, 2021
 *      Author: christy
 */

#include <iostream>

class solid{

public:

	float length;
	float breadth;
	float height;

	float Find_Area(){
		return (length*breadth);
	}

	float Find_Volume(){
			return (length*breadth*height);
		}

};

int main(){

	solid Rectangle;

	Rectangle.length = 12.34;
	Rectangle.breadth = 12.45;
	Rectangle.height = 25.22;

	std::cout <<"Area = "<< Rectangle.Find_Area() << std::endl;
	std::cout <<"Volume = "<< Rectangle.Find_Volume() << std::endl;

	return 0;

}


