
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

	//Extension_1 Size() Method
	cout << "\nNumer of items in the linked list = " << MyDblLinkedList.Size() << " item(s).\n";

	//Extension_2 IsEmpty() Method
	if (MyDblLinkedList.IsEmpty())
		cout << "\nYes linked list is Emtpy.\n";
	else
		cout << "\nNo linked list is not Emtpy.\n";

	//Extension_4 Reverse() Method
	cout << "\nAfter reverse the linked list elements:\n";
	MyDblLinkedList.Reverse();
	MyDblLinkedList.PrintList();

	//Extension_5 GetNode() Method
	clsDblLikedList<int>::Node* N1 = MyDblLinkedList.GetNode(2);
	cout << "\nthe Value of a node = " << N1->Value;

	//Extension_6 GetItem() Method
	int Value = MyDblLinkedList.GetItem(4);
	cout << "\nthe Value of a item = " << Value;

	//Extension_7 UpdateItem() Method
	MyDblLinkedList.UpdateItem(2, 500);

	cout << "\nLinked List content:\n";
	MyDblLinkedList.PrintList();

	//Extension_7 InsertAfter() Method (Searsh Nodes By Index) 
	MyDblLinkedList.InsertAfter(0, 1000);

	cout << "\nLinked List content:\n";
	MyDblLinkedList.PrintList();

	//Extension_3 Clear() Method
	cout << "\nExecuting .Clear()\n";
	MyDblLinkedList.Clear();

	cout << "\nNumer of items in the linked list = " << MyDblLinkedList.Size() << " item(s).\n";

	//Extension_2 IsEmpty() Method
	if (MyDblLinkedList.IsEmpty())
		cout << "\nYes linked list is Emtpy.\n";
	else
		cout << "\nNo linked list is not Emtpy.\n";

	system("pause>0");
	return 0;
}