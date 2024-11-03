#pragma once
#include <iostream>
#include "clsDblLikedList.h"
using namespace std;

template <class T>
class clsMyQueue
{
protected:

	clsDblLikedList <T> _MyList; // Composition Object : means object inside other class

public:

	void push(T Value)
	{
		_MyList.InsertAtEnd(Value);
	}

	void pop()
	{
		_MyList.DeleteFirstNode();
	}
	
	T front()
	{
		return _MyList.head->Value; // This code is faster because it used less processing to get first item
		//return _MyList.GetItem(0);
	}

	int Size()
	{
		return _MyList.Size();
	}

	T back()
	{
		return _MyList.LastNode->Value; // this code is faster because it used [ Big 0(1) ] an Algorithm
		//return _MyList.GetItem(Size() - 1); // this code is lower because it used [ Big 0(n) ] an Algorithm
	}

	void Print()
	{
		_MyList.PrintList();
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T GetItem(int Index) 
	{
		return _MyList.GetItem(Index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		_MyList.UpdateItem(Index, NewValue);
	}

	void InsertAfter(int Index, T NewValue)
	{
		_MyList.InsertAfter(Index, NewValue);
	}

	void InsertAtFront(T Value)
	{
		_MyList.InsertAtBegining(Value);
	}

	void InsertAtBack(T Value)
	{
		_MyList.InsertAtEnd(Value);
	}

	void Clear()
	{
		_MyList.Clear();
	}

};