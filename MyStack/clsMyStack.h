#pragma once
#include <iostream>
//#include "clsDblLikedList.h"
#include "clsMyQueue.h"
using namespace std;

template <class T>
class clsMyStack :public clsMyQueue <T>
{

public:
	
	void push(T Value)
	{
		clsMyQueue <T>::_MyList.InsertAtBegining(Value);
	}

	T top()
	{
		return clsMyQueue <T>::front();
	}

	
	T bottom()
	{
		return clsMyQueue <T>::back();
	}

};


