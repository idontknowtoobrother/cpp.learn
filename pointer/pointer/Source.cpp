#include <iostream>
#include <string>
using namespace std;

struct Container {
	string Name;
	float X;
	float Y;
	float Z;
};

int main() {
	int a = 100;

	int* aPtr;
	aPtr = &a;


	cout << "Address of 'a:int' (" << aPtr << ")" << endl;
	cout << "Value of 'a:int' (" << *aPtr << ")" << endl;

	int b = 50;
	aPtr = &b;

	cout << "Address of 'b:int' (" << aPtr << ")" << endl;
	cout << "Value of 'b:int' (" << *aPtr << ")" << endl;

	int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* numbersPtr = numbers;

	cout << "First element of pointer value = " << *numbersPtr << endl;

	for (int i = 0; i < size(numbers); i++) {
		cout << "(" << i << ") = " << *numbersPtr << endl;
		numbersPtr++;
	}

	Container container = { "Main Container", 1.f, 2.f, 4.f };
	Container* PtrToCont = &container;

	// uglyyyy
	cout << "Value(Name) of Pointer(container) = " << (*PtrToCont).Name << endl;


	// sexy
	cout << "Value(Name) of Pointer(container) = " << PtrToCont->Name << endl;
	cout << "Value(Y) of Pointer(container) = " << PtrToCont->Y << endl;
}
