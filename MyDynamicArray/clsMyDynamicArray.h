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
};