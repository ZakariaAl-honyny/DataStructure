
#include <iostream>
#include "clsMyUndoRedoString.h"
using namespace std;

int main()

{
	cout << "\n\n\t\t\t\t\t\tUndo/Redo Project\n\n";

	clsMyUndoRedoString S1;

	cout << "\nS1 = " << S1.Value;

	S1.Value = "Mohammed";
	cout << "\nS2 = " << S1.Value;

	S1.Value = "Mohammed2";
	cout << "\nS3 = " << S1.Value;

	S1.Value = "Mohammed3";
	cout << "\nS4 = " << S1.Value;

	cout << "\n\n____________\n\nUndo Method:\n____________\n";

	S1.Undo();
	cout << "\nS1 after Undo  = " << S1.Value;

	S1.Undo();
	cout << "\nS1 after Undo  = " << S1.Value;

	S1.Undo();
	cout << "\nS1 after Undo  = " << S1.Value;


	cout << "\n\n____________\n\nRedo Method:\n____________\n";

	S1.Redo();
	cout << "\nS1 after Redo  = " << S1.Value;

	S1.Redo();
	cout << "\nS1 after Redo  = " << S1.Value;

	S1.Redo();
	cout << "\nS1 after Redo  = " << S1.Value;

	system("pause>0");
	return 0;
}