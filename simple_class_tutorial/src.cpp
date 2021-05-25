/*
 * src.cpp
 *
 *  Created on: May 25, 2021
 *      Author: christy
 */


#include <iostream>
using namespace std;

class first_class{
	int i=0;
public:
	void setvalue (const int & value){i=value;}
	int getvalue() const {return i;}
};

int main(){
	const int i = 50;
	first_class class_1;
	class_1.setvalue(i);
	printf("%d\n", class_1.getvalue());
	return 0;
}
