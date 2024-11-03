
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

	//Extension_2 GetItem() Method
	cout << "\n\nItem(2): " << MyDynamicArray.GetItem(1);

	//Extension_3 Reverse() Method
	MyDynamicArray.Reverse();
	cout << "\n\nArray items after reverse:\n";
	MyDynamicArray.PrintList();

	//Extension_5 DeleteItemAt() Method
	MyDynamicArray.DeleteItemAt(2);
	cout << "\n\nArray items after delete item(2):\n";
	MyDynamicArray.PrintList();

	cout << "\nSize of Array is: " << MyDynamicArray.Size();

	//Extension_6 DeleteFirstItem() Method
	MyDynamicArray.DeleteFirstItem();
	cout << "\n\nArray items after delete first one:\n";
	MyDynamicArray.PrintList();
	cout << "\nSize of Array is: " << MyDynamicArray.Size();

	//Extension_7 DeleteLastItem() Method
	MyDynamicArray.DeleteLastItem();
	cout << "\n\nArray items after delete last one:\n";
	MyDynamicArray.PrintList();
	cout << "\nSize of Array is: " << MyDynamicArray.Size();

	//Extension_8 Find() Method
	int Index = MyDynamicArray.Find(30);
	if (Index == -1)
		cout << "\n\nItem was not Found :-(\n";
	else
		cout << "\n\n30 is Found at Index : " << Index;

	//Extension_9 DeleteItem() Method
	MyDynamicArray.DeleteItem(30);
	cout << "\n\nArray items after deleting 30:\n";
	MyDynamicArray.PrintList();
	cout << "\nSize of Array is: " << MyDynamicArray.Size();

	//Extension_10 InsertItemAt() Method
	MyDynamicArray.InsertItemAt(2, 2000);
	cout << "\nArray items after inserting 2000 at index 2:\n";
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList();

	//Extension_11 InsertAtBegainning() Method
	MyDynamicArray.InsertAtBegainning(500);
	cout << "\nArray items after insert 500 at the begainning:";
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList();

	//Extension_12 InsertBefore() Method
	MyDynamicArray.InsertBefore(2, 600);
	cout << "\nArray items after insert 600 before at index(2):";
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList();

	//Extension_13 InsertAfter() Method
	MyDynamicArray.InsertAfter(3, 700);
	cout << "\nArray items after insert 700 after at index(3):";
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList();

	//Extension_14 InsertAtEnd() Method
	MyDynamicArray.InsertAtEnd(1000);
	cout << "\nArray items after insert 1000 at the end:";
	cout << "\nArray Size: " << MyDynamicArray.Size() << endl;
	MyDynamicArray.PrintList();

	//Extension_4 Clear() Method
	MyDynamicArray.Clear();
	cout << "\n\nArray items after Clear:\n";
	MyDynamicArray.PrintList();

	system("pause>0");
	return 0;
}