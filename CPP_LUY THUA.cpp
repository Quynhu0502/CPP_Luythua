// CPP_LUY THUA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int so,mu,lt=1 ;
	cout << "nhap so:";
	cin >> so;
	cout << "nhap mu:";
	cin >>mu;
	for (int i = 1; i <= mu; i++)
	{
		lt *= so;


	}
	cout << "lt"<<lt;
	return 0;
}
