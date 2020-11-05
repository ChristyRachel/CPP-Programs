/*
 * src.cpp
 *
 *  Created on: Nov. 3, 2020
 *      Author: christy
 */

// extract to string
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string name;

  cout << "Please, enter your full name: ";
  getline (cin,name);
  cout << "Hello, " << name << "!\n";

  return 0;
}


