//small number set as zero by using function 

#include<iostream>
using namespace std;

void zeroSmaller(int &a, int &b)
{
	if (a<b)
      a=0;
    else
      b=0;
}

int main()
{
	int a, b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"Your enter number are "<<a<<" "<<b<<endl;
	zeroSmaller(a, b);
	cout<<"smaller of the two numbers set as 0 is: "<<a<<" "<<b;
	
	
	return 0;
}