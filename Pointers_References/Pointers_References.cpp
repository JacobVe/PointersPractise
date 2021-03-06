#include "stdafx.h"
#include <iostream>

#include "ArrowMember.h"

using namespace std;

void PassByValue(int x);
void PassByReference(int *x);


int main()
{

	// ### Passing by Value = Passing in Copy ###
	// ### Passing by Reference = Passing in Variables Address ###

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

	int myArray[5];

	int *bp0 = &myArray[0];
	int *bp1 = &myArray[1];
	int *bp2 = &myArray[2];
	int *bp3 = &myArray[3];
	int *bp4 = &myArray[4];

	cout << "BP0 is at " << bp0 << endl; 
	cout << "BP1 is at " << bp1 << endl;
	cout << "BP2 is at " << bp2 << endl;
	cout << "BP3 is at " << bp3 << endl;
	cout << "BP4 is at " << bp4 << endl;

	// Doesnt add value - Points to BP2 (3rd element) 
	bp0 += 2;
	cout << "BP0 is now at " << bp0 << endl;

	// Doesnt add value - Points to BP0 (1st element)
	bp1 -= 1;
	cout << "BP1 is now at " << bp1 << endl;

	ArrowMember amObject;
	ArrowMember *amPointer = &amObject;

	amPointer->printingStuff();

	amObject.printingStuff();

	amPointer->printingStuff();

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

