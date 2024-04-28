//take two distance and return larger distance by using function 

#include<iostream>
using namespace std;

int distance(int d1, int d2)
{
	if (d1>d2)
      return d1;
    return d2;
}

int main()
{
	int d1,d2;
	cout<<"Enter two distance :";
	cin>>d1>>d2;
	cout<<"The distance you enter is "<<d1<<" & "<< d2<<endl;
	cout<<"Larger distance is :"<< distance(d1,d2);
	return 0;
}