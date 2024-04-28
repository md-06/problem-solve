//swaps the value in main function by using function 

#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
   
}

int main()
{
	int a,b;
	cout<<"Enter two numbers :";
	cin>>a>>b;
	cout<<"a= "<<a<<" and b= "<<b<<endl;
	
	swap(a,b);
	cout<<"After swap a= "<<a<<" and b= "<<b;
	
	return 0;
}