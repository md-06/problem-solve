#include<iostream>
using namespace std;

class point

{
	int x,y;
    public:point():x(0),y(0)
	{ }
	void set()
	{
		cout<<"enter coordinate:";
		cin>>x>>y;
		
	}
	void show()
	{
		cout<<"\nx= "<<x<<" & y= "<<y;
		
	}
	
	point operator+(point m)
	{
		point temp;
		temp.x=x+m.x;
		temp.y=y+m.y;
		
		return temp;
	}
	
};
int main()
{
	point p1,p2,p3;
	p1.set();
	p2.set();
	cout<<"\np1 is :";
	p1.show();
	cout<<"\n\np2 is :";
	p2.show();
	p3=p1+p2;
	cout<<"\n\np3 is :";
	p3.show();
	
	return 0;
}