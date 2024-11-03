
#include <iostream>
#include "clsMyDynamicArray.h"
using namespace std;

int main()
{
	clsMyDynamicArray <int> MyDynamicArray(5);

	MyDynamicArray.SetItem(0, 10);
	MyDynamicArray.SetItem(1, 20);
	MyDynamicArray.SetItem(2, 30);
	MyDynamicArray.SetItem(3, 40);
	MyDynamicArray.SetItem(4, 50);

	cout << "\nMy Dynamic Array: \n";
	MyDynamicArray.PrintList();

	cout << "\nSize of Array is: " << MyDynamicArray.Size();
	cout << "\nis array empty: " << MyDynamicArray.IsEmpty();

	//Extension_1 ReSize() Method
	MyDynamicArray.ReSize(2);
	cout << "\n\nDynamic Array after resize to 2: \n";
	MyDynamicArray.PrintList();
	cout << "Size of Array is: " << MyDynamicArray.Size();

	MyDynamicArray.ReSize(10);
	cout << "\n\nDynamic Array after resize to 10: \n";
	MyDynamicArray.PrintList();
	cout << "Size of Array is: " << MyDynamicArray.Size();


	system("pause>0");
	return 0;
}