#include<iostream>
#include<math.h>
using namespace std;

double power(double n, int p)
{
	return pow(n,p);
}
int main()
{
	double n; int p;
	cout<<"Enter the base value: ";
	cin>>n;
	cout<<"Enter the power value: ";
	cin>>p;
	cout<<"Result of "<<n<<"^"<<p<<" : "<< power(n,p);
	return 0;
}