#include "stdafx.h"
#include <iostream>


using namespace std;

void PassByValue(int x);
void PassByReference(int *x);


int main()
{
	int memory = 5;

	cout << memory << endl;

	// Memory address (using &)
	cout << &memory << endl;
	
	int *pointer;


	pointer = &memory;

	cout << pointer << endl;

	int num1 = 11;
	int num2 = 34;

	// Passing by Value (Not changing value)
	PassByValue(num1);
	cout << "Passing by Value(num1): " << num1 << endl;
	// Passing by Reference (Changing value)
	PassByReference(&num1);
	cout << "Passing by Reference(num1): " << num1 << endl;

	// Passing by Value (Not Changing value)
	PassByValue(num2);
	cout << "Passing by Value(num2): " << num2 << endl;
	// Passing by Reference (Changing Value)
	PassByReference(&num2);
	cout << "Passing by Reference(num2): " <<  num2 << endl;

    return 0;
}

void PassByValue(int x)
{
	x = 99;
}

void PassByReference(int *x)
{
	*x = 66;
}