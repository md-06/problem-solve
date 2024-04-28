#include<iostream>
using namespace std;

class item
{
	public:
		int a,b;//instance member variable
		static int k;//static member variable 
		
};
int item::k;//we have to define static member variable otherwise get erro r
int main()
{
	item i1,i2;
	i1.a=5;
	cout<<"a="<<i2.a;//garbage
	i1.k=4;// using dot operator
	cout<<"\nk= "<<i2.k;//k=4 
	item::k=10;// we can access using scope resulation operator 
	cout<<"\nk= "<<i2.k;//k=10
	cout<<endl;
	return 0;
}