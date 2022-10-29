#pragma once
#include <algorithm>
#include <array>
#include <iostream>
#include <string>
using namespace std;

class ArraySize
{
private:
	//construction uses aggregate initialization
	// double braces required
	array<int, 5> ar1{ {3,4, 5, 1, 2} };
	array<int, 5> ar2 = { 1, 2, 3, 4, 5 };
	array<string, 2> ar3 = { {string("a"), "b"} };
	int i;

public:
	ArraySize();
	void showArray();
	int ar1Imp();
	int ar1BImp();
	int ar2Imp();
	string ar3Imp();
};