#pragma once
#include <Iostream>
#include "clsMyQueueArr.h"
using namespace std;

template <class T>
class clsMyStackArr : public clsMyQueueArr <T>
{
public:

	void push(T Value)
	{
		clsMyQueueArr <int>::_MyList.InsertAtBegainning(Value);
	}

	T top()
	{
		return clsMyQueueArr <int>::front();
	}

	T bottom()
	{
		return clsMyQueueArr <int>::back();
	}

};