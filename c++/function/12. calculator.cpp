#include<iostream>
#include<stdlib.h>
using namespace std;

struct fraction
{
	float a,b;
};

struct.fraction fadd( struct a, struct b)
{
	return a+b;
}

struct.fraction fsub( struct a, struct b)
{
	return b-a;
}

struct.fraction fmul( struct a, struct b)
{
	return a*b;
}

struct.fraction fdiv( struct a, struct b)
{
	return a/b.0;
}

int main()
{
	struct.fraction f1;
	int n;
	cout<<"***Enter your choice***"<<endl;
	cout<<"1. additon"<<endl;
	cout<<"2. subtraction"<<endl;
	cout<<"3. multiplication"<<endl;
	cout<<"4. division"<<endl;
	cout<<"5. exit"<<endl;
	cin>> n;
	
	cout<<"enter two number :";
	cin>>f1.a>>f1.b;
	switch(n)
	{
		case 1:
			{
				cout<<"addition of two no. is "fadd(f1.a,f1.b)
				break;
			}
		case 2:
			{
				cout<<"subtraction of two no. is "fsub(f1.a,f1.b)
				break;
			}
		case 3:
			{
				cout<<"multiplication of two no. is "fmul(f1.a,f1.b)
				break;
			}
		case 4:
			{
				cout<<"division of two no. is "fdivf1.a,f1.b)
				break;
			}
		case 5:
			{
				exit(0)
			}
	}
}