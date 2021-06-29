/*
 * src.cpp
 *
 *  Created on: Jun. 16, 2021
 *      Author: christy
 */

#include <iostream>

class Node {
public:
	int value;
	Node *next;
};

int main() {

	Node *head = new Node();
	Node *second = new Node();
	Node *third = new Node();
	Node *forth = new Node();

	head->value = 20;
	second->value = 50;
	third->value = 70;
	forth->value = 100;

	head->next = second;
	second->next = third;
	third->next = forth;
	forth->next = NULL;

	while (head != NULL) {
		std::cout << (head->value) << " ";
		head = head->next;
	}

	return 0;
}

