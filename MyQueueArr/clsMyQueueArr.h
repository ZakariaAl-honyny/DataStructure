#pragma once
#include <iostream>
#include "clsMyDynamicArray.h"
using namespace std;

template <class T>
class clsMyQueueArr
{
protected :

	clsMyDynamicArray <T> _MyList; // (Composition Object) : Means Object from class Inside Another class

public:

	void push(T Item)
	{
		_MyList.InsertAtEnd(Item);
	}

	void pop()
	{
		_MyList.DeleteFirstItem();
	}

	T front()
	{
		return _MyList.GetItem(0);
	}

	int Size()
	{
		return _MyList.Size();
	}

	T back()
	{
		return _MyList.GetItem(Size() - 1);
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

	bool UpdateItem(int Index, T NewValue)
	{
		return _MyList.SetItem(Index, NewValue);
	}

	bool InsertAfter(int Index, T Value)
	{
		return _MyList.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value)
	{
		_MyList.InsertAtBegainning(Value);
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

