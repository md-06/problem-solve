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
	
	void operator+=(point m)
	{
		x+=m.x;
		y+=m.y;
	}
	
};
int main()
{
	point p1,p2;
	p1.set();
	p2.set();
	cout<<"\np1 is :";
	p1.show();
	cout<<"\n\np2 is :";
	p2.show();
	p1+=p2;
	cout<<"\n\nAfter overload p1+=p2 is :";
	p1.show();
	
	return 0;
}