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
	
	bool operator<(point m)
	{
		return (x<m.x && y<m.y);
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
	cout << (p1 < p2 ? "\n\np2 is greater" : "\n\np1 is greater");
	
	return 0;
}