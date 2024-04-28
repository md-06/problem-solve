#include<iostream>
using namespace std;

class time
{
	int hrs,min,sec;
	char ch;
	public:
		void input()
		{
		   cout<<"Enter time in this (HH:MM:SS)formet :";
		   cin>>hrs>>ch>>min>>ch>>sec;
		}
		void display()
		{
			cout<<"Time is : "<<hrs<<ch<<min<<ch<<sec;
		}
};
int main()
{
	
}