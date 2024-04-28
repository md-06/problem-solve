//area of circle by using function 

#include<iostream>
using namespace std;

float circarea(float r)
{
   return 3.14*r*r;
}

int main()
{
	float r;
	cout<<"Enter radius of circle :";
	cin>>r;
	
	cout<<"Area of circle is :"<< circarea(r);
	
	return 0;
}