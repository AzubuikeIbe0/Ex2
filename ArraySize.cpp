
#include "ArraySize.h"


ArraySize::ArraySize(){}

int ArraySize::ar1Imp()
{
	cout << "\nInitial ar1 : ";
	

	{
		for (auto i : ar1)
			cout << i << ' ';
		for (i = 0; i < ar1.size(); i++)
			i = ar1[i];
	}
	return ar1[i];
}

int ArraySize::ar1BImp()
{
	// container operations are supported
	sort(ar1.begin(), ar1.end());

	cout << "\nsorted ar1 : ";
	

	{
		for (auto i : ar1)
			cout << i << ' ';
		for (i = 0; i < ar1.size(); i++)
			i = ar1[i];
	}
	return ar1[i];

}

int ArraySize::ar2Imp()
{
	// Filling ar2 with 10
	ar2.fill(10);
	cout << "\nFilled ar2 : ";
	
	
	{
		for (auto i : ar2)
			cout << i << ' ';
		for (i = 0; i < ar2.size(); i++)
			i = ar2[i];
	}
	return ar2[i];
}
string ArraySize::ar3Imp()
{
	// ranged for loop is supported

	cout << "\nar3 : ";
	for (auto& s : ar3)
	{
		cout << s << ' ';
		for (i = 0; i < ar3.size(); i++)
		s = ar3[i];
	}
	return ar3[i];
}

void ArraySize::showArray()
{
	cout << "Sizes of arrays are" << endl;
	cout << ar1.size() << endl;
	cout << ar2.size() << endl;
	cout << ar3.size() << endl;
}