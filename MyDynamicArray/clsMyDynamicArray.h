#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsMyDynamicArray
{
protected:
	int _Size = 0;
	T* _TempArray;

public:

	T* OriginalArray;

	clsMyDynamicArray(int Size = 0)
	{
		if (Size < 0)
			Size = 0;
		_Size = Size;

		OriginalArray = new T[_Size];
	}

	~clsMyDynamicArray()
	{
		delete[] OriginalArray;
	}

	bool SetItem(int Index, T Value)
	{
		if (Index >= _Size || _Size < 0)
		{
			return false;
		}

		OriginalArray[Index] = Value;
		return true;
	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return (_Size == 0 ? true : false);
	}

	void PrintList()
	{
		for (int i = 0; i <= _Size - 1; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		cout << "\n";
	}

	void ReSize(int NewSize)
	{
		if (NewSize < 0)
			NewSize = 0;

		_TempArray = new T[NewSize];

		if (NewSize < _Size)
			_Size = NewSize;

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_Size = NewSize;

		delete OriginalArray;
		OriginalArray = _TempArray;

	}

	T GetItem(int Index)
	{
		return OriginalArray[Index];
	}

	// This Solution is faster because it is Using [ Big O(log n) ] an Algorithm
	void Reverse()
	{
		int Middle = (_Size / 2);
		T Temp = 0;
		for (int i = 0; i < Middle; i++)
		{
			Temp = OriginalArray[i];
			OriginalArray[i] = OriginalArray[_Size - i - 1];
			OriginalArray[_Size - i - 1] = Temp;

		}
	}

	// This Another Solution is Lower because it is Using [ Big O(n) ] an Algorithm
	/*void Reverse()
	{
		int Counter = 0;
		_TempArray = new T[_Size];

		for (int i = _Size - 1; i >= 0; i--)
		{
			_TempArray[Counter] = OriginalArray[i];
			Counter++;
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}*/

	void Clear()
	{
		_Size = 0;
		_TempArray = new T[0];
		delete OriginalArray;
		OriginalArray = _TempArray;
	}
	
	bool DeleteItemAt(int Index)
	{
		if (Index >= _Size || _Size < 0)
		{
			return false;
		}

		_Size--;
		_TempArray = new T[_Size];

		//Copy all Item before index
		for (int i = 0; i < Index; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		//Copy all Item after index
		for (int i = Index + 1; i < _Size + 1; i++)
		{
			_TempArray[i - 1] = OriginalArray[i];
		}

		delete OriginalArray;
		OriginalArray = _TempArray;
		return true;
	}

	void DeleteFirstItem()
	{
		DeleteItemAt(0);
	}

	void DeleteLastItem()
	{
		DeleteItemAt(_Size - 1);
	}

	int Find(T Value)
	{

		for (int i = 0; i < _Size; i++)
		{
			if (OriginalArray[i] == Value)
			{
				return i;
			}
		}

		return -1;

	}

	bool DeleteItem(T Value)
	{

		int Index = Find(Value);

		if (Index == -1)
		{
			return false;
		}

		DeleteItemAt(Index);
		return true;

	}

};