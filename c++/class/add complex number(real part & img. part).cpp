#include<iostream>
using namespace std;

class complex
{
	private:
		int real;
		int img;
	public:
		void set(int r, int i)
		{

		    real=r;
		    img=i;
		
		}
		void show(complex c)
		{
			
			cout<<real<<" + "<<img<<"i"<<endl;
			cout<<c.real<<" + "<<c.img<<"i"<<endl;
		}
		
	   void add(complex c)
	   {
	   	
	   	cout<<c.real+real<<" + "<<c.img+img<<"i";
	   	
	   }
	
};

int main()
{
	complex c1,c2;
	c1.set(2,5);
	c2.set(4,6);
	cout<<endl;
	c1.show(c2);
    c1.add(c2);
	
	
	return 0;
}