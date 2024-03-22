
#include <iostream>
#include <conio.h>
#include "Stack.cpp"

using namespace std;

int getelement(Stack<int>& s) {
	int t = s.gettop();
	s.pop();
	if (s.isEmpty())
		return t;
	else {
		int last = getelement(s);
		s.push(t);
		return last;
	}
}


void reverseStack(Stack<int>& s) {
	if (s.isEmpty())
		return;
	int val = getelement(s);
	reverseStack(s);
	s.push(val);
}

int main() {

	// Create a stack of size 10, storing integers
	Stack<int> theStack(10); 
	int array[8] = { 1,2,3,4,5,6,7,8 };
	int i = 0;
	Stack<int> tempStack(10);

	// Push data into the stack one by one and print it
	while (i < 8) {
		theStack.push(array[i]);
		//cout << array[i] << " ";
		i++;
	}
	cout << endl;

	// Get the top element of the stack and print it
	cout << "Top element of the original stack: " << theStack.gettop() << endl;
	reverseStack(theStack);
	cout << "Top element of the reverse stack: " << theStack.gettop() << endl;

	// Print the elements of the stack after reversing
	cout << "Stack after reversal: ";
	while (!theStack.isEmpty()) {
		int value = theStack.pop();
		cout << value << " ";
	}
	cout << endl;

	_getch();
	return 1;
}
