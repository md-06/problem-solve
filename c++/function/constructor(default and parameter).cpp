#include<iostream>
using namespace std;

class person
{
	int age , rank;
	public:
		int getAge(){ return age;	}
		int getRank(){ return rank;	}
		person():age(0),rank(0){	}
		
		person(int c, int d)
		{
		      age=c;
		      rank=d;
		}
		person( person &p){
		      age=p.age;
		      rank=p.rank;
		}
};
int main()
{
	person p1(21,15),p2;
	p2=p1;
    cout<<"P1age= "<<p1.getAge()<<" and rank= "<<p1.getRank()<<endl;
    cout<<"P2age= "<<p2.getAge()<<" and rank= "<<p2.getRank()<<endl;
    
	return 0;	
}