/*
 * src.cpp
 *
 *  Created on: Nov. 2, 2020
 *      Author: christy
 */

#include <iostream>
using namespace std;
int main () {
  char first, last;

  cout << "Please, enter your first name followed by your surname: ";

  first = cin.get();     // get one character
  cin.ignore(500,' ');   // ignore until space

  last = cin.get();      // get one character

  cout << "Your initials are " << first << last << '\n';

  return 0;
}


