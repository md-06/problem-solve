//square of given number by using function 

#include<iostream>
#include<math.h>
using namespace std;

double power(double n, int p=2)
{
   return pow(n,p);
}

int main()
{
	double n;
	
	cout<<"Enter number for calculate square :";
	cin>>n;
	
	cout<<"Square of "<<n<<" is :"<< power(n);
	return 0;
}