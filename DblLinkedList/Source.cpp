
#include <iostream>
#include "clsDblLikedList.h"
using namespace std;

int main()
{
	clsDblLikedList <int> MyDblLinkedList;

	MyDblLinkedList.InsertAtBegining(5);
	MyDblLinkedList.InsertAtBegining(4);
	MyDblLinkedList.InsertAtBegining(3);
	MyDblLinkedList.InsertAtBegining(2);
	MyDblLinkedList.InsertAtBegining(1);

	cout << "\nLinked List content:\n";
	MyDblLinkedList.PrintList();


	cout << "\nNumer of items in the linked list = " << MyDblLinkedList.Size() << " item(s).\n";


	clsDblLikedList<int>::Node* N1 = MyDblLinkedList.Find(2);

	if (N1 != NULL)
		cout << "\nNode with value " << N1->Value << " is found :-).\n";
	else
		cout << "\nNode with value " << N1->Value << " is not found :-(.\n";

	MyDblLinkedList.InsertAfter(N1, 500);
	cout << "\nAfter inserting 500 after 2:\n";
	MyDblLinkedList.PrintList();

	MyDblLinkedList.InsertAtEnd(700);
	cout << "\nAfter inserting 7500 at end:\n";
	MyDblLinkedList.PrintList();

	clsDblLikedList<int>::Node* N2 = MyDblLinkedList.Find(4);

	MyDblLinkedList.DeleteNode(N2);
	cout << "\n\After Deleting 4\n";
	MyDblLinkedList.PrintList();

	MyDblLinkedList.DeleteFirstNode();
	cout << "\n\After Deleting First Node\n";
	MyDblLinkedList.PrintList();

	MyDblLinkedList.DeleteLastNode();
	cout << "\n\After Deleting Last Node\n";
	MyDblLinkedList.PrintList();

	cout << "\nNumer of items in the linked list = " << MyDblLinkedList.Size() << " item(s).\n";

	if (MyDblLinkedList.IsEmpty())
		cout << "\nYes linked list is Emtpy.\n";
	else
		cout << "\nNo linked list is not Emtpy.\n";

	cout << "\nAfter reverse the linked list elements:\n";
	MyDblLinkedList.Reverse();
	MyDblLinkedList.PrintList();

	cout << "\nExecuting .Clear()\n";
	MyDblLinkedList.Clear();

	cout << "\nNumer of items in the linked list = " << MyDblLinkedList.Size() << " item(s).\n";

	if (MyDblLinkedList.IsEmpty())
		cout << "\nYes linked list is Emtpy.\n";
	else
		cout << "\nNo linked list is not Emtpy.\n";

	system("pause>0");
	return 0;
}