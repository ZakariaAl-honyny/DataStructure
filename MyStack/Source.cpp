
#include <iostream>
#include "clsMyStack.h"
using namespace std;

int main()
{
	//clsMyQueue <int> MyQueue;
	clsMyStack <int> Mystack;

	Mystack.push(10);
	Mystack.push(20);
	Mystack.push(30);
	Mystack.push(40);
	Mystack.push(50);
	
	cout << "\nStack: \n";
	Mystack.Print();

	cout << "\nSize of stack is: " << Mystack.Size();
	cout << "\nFirst item value in stack is: " << Mystack.top();
	cout << "\nLast item value in stack is: " << Mystack.bottom();

	cout << "\n\nstack after pop:\n";
	Mystack.pop();
	Mystack.Print();

	cout << "\nIs stack empty: " << Mystack.IsEmpty() << endl;

	// Extension #1
	cout << "\nFirst item in stack is: " << Mystack.GetItem(0) << endl;

	// Extension #2
	Mystack.Reverse();
	cout << "\nStack after reversing:\n";
	Mystack.Print();

	// Extension #3
	Mystack.UpdateItem(2, 500);
	cout << "\nStack after update one item at index(2):\n";
	Mystack.Print();

	// Extension #4
	Mystack.InsertAfter(1, 700);
	cout << "\nStack after insert 700 after index(1):\n";
	Mystack.Print();

	// Extension #5
	Mystack.InsertAtFront(1000);
	cout << "\nStack after insert 1000 at the front:\n";
	Mystack.Print();

	// Extension #6
	Mystack.InsertAtBack(2000);
	cout << "\nStack after insert 2000 at the back:\n";
	Mystack.Print();

	// Extension #7
	Mystack.Clear();
	cout << "\nStack after clear all items:\n";
	Mystack.Print();

	system("pause>0");
	return 0;
}