#include "stdafx.h"
#include <iostream>


using namespace std;

int main()
{
	int memory = 5;

	cout << memory << endl;

	// Memory address (using &)
	cout << &memory << endl;
	
	int *pointer;


	pointer = &memory;

	cout << pointer << endl;


	float square = sqrt(35);

	cout << square << endl;

    return 0;
}

