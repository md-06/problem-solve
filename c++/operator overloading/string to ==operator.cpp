#include<iostream>
#include<string>
using namespace std;

class myclass
{
	string data;
	public :
	  myclass(const string& value):data(value){ }
	
	bool operator==(const myclass& m)const
	{
	  return this ->data==m.data;	
	}
};
int main()
{
	myclass c1("hello"),c2("world");
	cout<<(c1==c2?"\n c1 is equal to c2":"\n c1 is not equal to c2");
	
	return 0;
}