#include<iostream>
using namespace std;

enum days_of_week { sun, mon, tue, wed, thu,fri, sat};

int main()
{
	days_of_week day1, day2;
	
	day1=mon;
	day2=thu;
	int diff=day2-day1;
	cout<<diff<<endl;
	if (day1<day2)
	    cout<<"day1 before day2"<<endl;
	    
    return 0;
}