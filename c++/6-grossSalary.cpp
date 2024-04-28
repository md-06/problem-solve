#include<iostream>
using namespace std;

int main()
{
	int basicS,grossSalary,hra;
	cout<<"Enter basic salary :";
	cin>>basicS;
	cout<<"Enter house rent allowance or HRA :";
	cin>>hra;
	grossSalary=hra+basicS;
	cout<<"Gross Salary is :"<<grossSalary;
	
	return 0;
}