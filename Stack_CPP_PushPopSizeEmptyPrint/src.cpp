# include <iostream>
#include <stack>

using namespace std;
void CheckStackEmptyOrNot(stack<int> newStack) {
	if (newStack.empty())
		cout << "This stack is empty" << endl;
	else
		cout << "This stack is not empty" << endl;
}

void checkStackSize(stack<int> testStack) {
	cout << "Stack size is " << testStack.size() << endl;
}

void printTheStack(stack<int> printStack) {
	cout << "Now the stack is ";
	while (!printStack.empty()){
		cout << printStack.top() << " ";
		printStack.pop();
	}
	cout << endl;
}

int main() {
	stack<int> myStack;

	CheckStackEmptyOrNot(myStack);
	checkStackSize(myStack);
	myStack.push(5);
	printTheStack(myStack);

	myStack.push(8);
	printTheStack(myStack);

	myStack.push(12);
	printTheStack(myStack);

	myStack.push(13);
	printTheStack(myStack);

	myStack.push(4);
	printTheStack(myStack);
	CheckStackEmptyOrNot(myStack);
	checkStackSize(myStack);

	myStack.pop();
	printTheStack(myStack);

	CheckStackEmptyOrNot(myStack);
	checkStackSize(myStack);
	myStack.pop();

	myStack.pop();
	printTheStack(myStack);
	CheckStackEmptyOrNot(myStack);
	checkStackSize(myStack);

	return 0;
}
