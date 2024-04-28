//hms to secs by using function 

#include<iostream>
using namespace std;

int hms_to_secs(int h,int m,int s)
{
   return h*3600 + m*60 + s;
}

int main()
{
	int h,m,s;
	char c;
	
	cout<<"Enter time format(HH:MM:SS): ";
	cin>>h>>c>>m>>c>>s;
	
	cout<<"Total second is :"<< hms_to_secs(h,m,s);
	return 0;
}