//how many times a function  has been called by using function 

#include<iostream>
using namespace std;

// using global variable
int count=0;
inline int fun()
{
   count+=1;
   return count;
}

int main()
{
	
	fun();	fun();	fun();
	fun();	fun();  fun();
	fun();	fun();  fun();
	int f= fun();
	
	cout<<"I have been called "<<f<<" times.";
	return 0;
}