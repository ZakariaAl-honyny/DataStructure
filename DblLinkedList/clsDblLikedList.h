#pragma once
#include <iostream>
using namespace std;

//template<typename T>
template<class T>
class clsDblLikedList
{
protected:
	int _Size = 0;

public:

	class Node
	{
	public:
		T Value;
		Node* Next;
		Node* Prev;
	};

	Node* head = NULL;

	void InsertAtBegining(T Value)
	{
		/*
		 1-Create a new node with the desired value.
		 2-set the next pointer of the new node to the current head of the list
		 3-set the previuos pointer of the current head to the new node.
		 4-Set the new node as the new head of the list
		*/

		Node* NewNode = new Node();
		NewNode->Value = Value;
		NewNode->Prev = NULL;
		NewNode->Next = head;

		if (head != NULL)
		{
			head->Prev = NewNode;
		}

		head = NewNode;
		_Size++;
	}

	Node* Find(T Value)
	{
		Node* Current = head;

		while (Current != NULL)
		{
			if (Current->Value == Value)
				return Current;

			Current = Current->Next;
		}

		return NULL;

	}

	void InsertAfter(Node* Current, T Value)
	{
		/*
		1- Create a new node with the desired  value.
		2- Set the next pointer of the new node to the next node of the current node.
		3- Set the previous pointer of the new node to the current node.
		4- Set the next pointer of the current node to the new node.
		5- Set the previous pointer of the next node to the new node(if it exists).
		*/

		//Node* Current = Find(Value);

		if (Current == NULL) {
			return;
		}

		Node* NewNode = new Node();
		NewNode->Value = Value;
		NewNode->Next = Current->Next;
		NewNode->Prev = Current;

		if (Current->Next != NULL)
			Current->Next->Prev = NewNode;

		Current->Next = NewNode;
		_Size++;

	}

	void InsertAtEnd(T Value)
	{
		/*
			1- Craete a new node with desired value.
			2- Traverse the list to find the last node.
			3- Set the next pointer og the last node to the new node.
			4- Set the previous pointer of the new node to the last node.
		*/

		Node* NewNode = new Node();
		NewNode->Value = Value;
		NewNode->Next = NULL;

		if (head == NULL)
		{
			NewNode->Prev = NULL;
			head = NewNode;
		}
		else
		{
			Node* Currenrt = head;
			while (Currenrt->Next != NULL)
			{
				Currenrt = Currenrt->Next;
			}

			Currenrt->Next = NewNode;
			NewNode->Prev = Currenrt;
		}

		_Size++;
	}

	void DeleteNode(Node* &NodeToDelete)
	{
		/*
		1- Set the next pointer of the previous node to the next pointer of the Current node.
		2- Set the previous pointer of the next node to the previous pointer of the Current node.
		3- Delete the Current node.
		*/

		//Node* NodeToDelete = Find(Value);

		if (head == NULL || NodeToDelete == NULL) {
			return;
		}

		if (head == NodeToDelete) {
			head = NodeToDelete->Next;
		}

		if (NodeToDelete->Next != NULL) {
			NodeToDelete->Next->Prev = NodeToDelete->Prev;
		}

		if (NodeToDelete->Prev != NULL) {
			NodeToDelete->Prev->Next = NodeToDelete->Next;
		}

		delete NodeToDelete;
		_Size--;

	}

	void DeleteFirstNode()
	{
		/*
		1- Store a reference of the head node in the temporary variable.
		2- Update the head pointer to point to the next node in the list.
		3- Set the previous pointer of the  next head to NULL.
		4- Delete the temporary reference to the old head node.
		*/

		if (head == NULL) {
			return;
		}

		Node* Temp = head;
		head = head->Next;
		if (head != NULL) {
			head->Prev = NULL;
		}
		delete Temp;
		_Size--;

	}

	void DeleteLastNode()
	{
		/*
		1- Traverse the list to find the last node.
		2- Set the next previous pointer of the second-to-last node to NULL.
		3- Delete the last node.
		*/

		if (head == NULL) {
			return;
		}

		if (head->Next == NULL) {
			delete head;
			head = NULL;
			return;
		}

		Node* Current = head;
		//we need to find the node before last node.
		while (Current->Next->Next != NULL)
		{
			Current = Current->Next;
		}

		Node* Temp = Current->Next;
		Current->Next = NULL;
		delete Temp;
		_Size--;
	}

	// print the linked list Details
	void PrintListDetails()
	{
		Node* Current = head;

		cout << "\n\nNULL" << " <--> ";
		while (Current != NULL)
		{
			cout << Current->Value << " <--> ";
			Current = Current->Next;
		}
		cout << "NULL\n";
	}

	// print the linked list
	void PrintList()
	{

		Node* Current = head;

		while (Current != NULL)
		{
			cout << Current->Value << " ";
			Current = Current->Next;
		}
		cout << "\n";

	}

	int Size()
	{
		//this solution is slower because it is Big O(n) an Algorithm.
		/*int Size = 0;
		Node* Current = head;

		while (Current != NULL)
		{
			Size++;
			Current = Current->Next;
		}
		return Size;*/

		//this solution is Faster because it is Big O(1) an Algorithm.
		return _Size;
	}

	bool IsEmpty()
	{
		//this solution is slower because it is Big O(n) an Algorithm.
		/*int Size = 0;
		Node* Current = head;

		while (Current != NULL)
		{
			Size++;
			Current = Current->Next;
		}
		return (Size == 0) ? true : false;*/

		//this solution is Faster because it is Big O(1) an Algorithm.
		return (_Size == 0 ? true : false);
	}

	void Clear()
	{

		//while (head != NULL)
		while (_Size > 0)
		{
			DeleteFirstNode();
		}

	}
};

