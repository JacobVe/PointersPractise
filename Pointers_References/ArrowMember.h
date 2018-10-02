#pragma once
#include <iostream>


using namespace std;

class ArrowMember
{
public:
	ArrowMember();
	void printingStuff();

	void setStuff(int s) { const int stuff = s; }

	int getStuff() { return stuff; }
};

