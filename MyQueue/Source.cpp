
#include <iostream>
#include "clsMyQueue.h"
using namespace std;

int main()
{
	clsMyQueue <int> MyQueue;
	
	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	cout << "\nQueue: \n";
	MyQueue.Print();

	cout << "\nSize of queue is: " << MyQueue.Size();
	cout << "\nFirst item value in queue is: " << MyQueue.front();
	cout << "\nLast item value in queue is: " << MyQueue.back();
	 
	cout << "\n\nQueue after pop:\n";
	MyQueue.pop();
	MyQueue.Print();

	cout << "\nIs queue empty: " << MyQueue.IsEmpty() << endl;

	// Extension #1
	cout << "\nFirst item in queue is: " << MyQueue.GetItem(0) << endl;

	// Extension #2
	MyQueue.Reverse();
	cout << "\nQueue after reversing:\n";
	MyQueue.Print();

	// Extension #3
	MyQueue.UpdateItem(2, 500);
	cout << "\nQueue after update one item at index(2):\n";
	MyQueue.Print();

	// Extension #4
	MyQueue.InsertAfter(1, 700);
	cout << "\nQueue after insert 700 after index(1):\n";
	MyQueue.Print();

	// Extension #5
	MyQueue.InsertAtFront(1000);
	cout << "\nQueue after insert 1000 at the front:\n";
	MyQueue.Print();

	// Extension #6
	MyQueue.InsertAtBack(2000);
	cout << "\nQueue after insert 2000 at the back:\n";
	MyQueue.Print();

	// Extension #7
	MyQueue.Clear();
	cout << "\nQueue after clear all items:\n";
	MyQueue.Print();

	system("pause>0");
	return 0;
}