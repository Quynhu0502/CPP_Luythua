#include <iostream>
using namespace std;


double tinhluythua(double a, double b) {

	;
	double giatri=1;



	for (double i = 1; i <= b; i++)
	{
		giatri *= a;


	}
	return giatri;
}
	

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
	cout << "lt: " << lt << "\n";
	cout << "lt: " << tinhluythua(so,mu);
	return 0;
}
