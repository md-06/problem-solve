#include<iostream>
using namespace std;

class demo
{
	int x,y;
	static int z;
	public:
		void getdata()
		{
			
			cout<<"\nEnter value of x: ";
			cin>>x;
			cout<<"Enter value of y: ";
		    cin>>y;
		    z++;
		}
		
		void showdata()
		{
			cout<<"x= "<<x<<" y= "<<y<<" z= "<<z<<endl;
		}
		
		static void staticfun()//static function
		{
			cout<<"\nhello\n";
			cout<<"z= "<<z;// due to z is static data member it will print(only use static data member use in static function)
		//	cout<<"x ="<<x<<" y= "<<y;//we will get error because we can't use normal data in static function.
		}
};
//refrence of static data 'z'
int demo::z;//whenever we use static data member we must use this to avoid error
int main()
{
	demo obj1,obj2;
	obj1.getdata();//z=1
	obj1.showdata();//x=10 y=20 z=1
	obj2.getdata();//z=2
//	obj1.showdata();//x=10 y=20 z=2   //if we call showdata of obj1 after set value
// of obj2 it's value will increase by 1 due to same location of z. 
	obj2.showdata();//x=30 y=40 z=2
	
	obj2.staticfun();
	demo::staticfun();
	return 0;
}