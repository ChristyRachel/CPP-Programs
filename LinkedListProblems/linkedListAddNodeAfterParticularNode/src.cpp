#include <iostream>

class Node {
public:
	int value;
	Node *next;
};

void printLinkedList(Node* head){

	while (head != NULL) {
		std::cout << (head->value) << " ";
		head = head->next;

}
	std::cout << std::endl;
}

void insertNodeAfterParticularNode(Node*previous, int newValue){
	Node *newNode = new Node();
	newNode -> value = newValue;
	newNode -> next = previous->next;
	previous->next = newNode;
}

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

	insertNodeAfterParticularNode(head,1234);
    printLinkedList(head);

    insertNodeAfterParticularNode(forth,5678);
    printLinkedList(head);

    return 0;
}
