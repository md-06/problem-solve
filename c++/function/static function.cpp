#include<iostream>
using namespace std;

class item
{
	private:
		int a,b;//instance member variable
		static int k;//static member variable 
	public:
		void setA(int x){ a=x;	}
		void setb(int y){ b=y;	}
		int getA(){ return a;	}
	    int getB(){ return b;	}
	    static void setK(int c){ k=c; }
	    static int getK(){ return k;	}
};
int item::k=10;//define static variable
int main()
{
	item::setK(4);
	cout<<"\nk="<<item::getK();
	cout<<endl;
	return 0;
}