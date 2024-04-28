#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"Enter no. of rows(columns == rows) :";
	cin>>n;
	for (i=n;i>=1;i--)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=n-i)
			  cout<<" ";
			else
        	  cout<<"*";			  
		}
		cout<<endl;
	}
}