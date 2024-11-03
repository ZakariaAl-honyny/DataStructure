
#include <iostream>
#include "clsMyDynamicArray.h"
using namespace std;

int main()
{
	clsMyDynamicArray <int> MyDynamicArray(10);

	MyDynamicArray.SetItem(0, 10);
	MyDynamicArray.SetItem(1, 20);
	MyDynamicArray.SetItem(2, 30);
	MyDynamicArray.SetItem(3, 40);
	MyDynamicArray.SetItem(4, 50);

	cout << "\nMy Dynamic Array: \n";
	MyDynamicArray.PrintList();

	cout << "\nSize of stack is: " << MyDynamicArray.Size();
	cout << "\nis array empty: " << MyDynamicArray.IsEmpty();

	system("pause>0");
	return 0;
}