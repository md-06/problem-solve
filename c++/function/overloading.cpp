#include <iostream>
using namespace std;

//int add(int , int);


float add(float a, float b)
{
    cout<<"float addition"<<endl;
    return a+b;
}

int main()
{
	int add(int , int);//what if we declear it at here.
	
    int a=4,b=9;
    float c=4.1, d=9.0;
    cout<<add(a,b)<<endl;
    cout<<add(c,d);
    return 0;
}

int add(int a, int b)
{
    cout<<"integer addition"<<endl;
    return a+b;
}

