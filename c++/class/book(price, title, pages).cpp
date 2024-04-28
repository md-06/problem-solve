#include<iostream>
#include<string>
using namespace std;

class publication
{
	public:
		int price;
		string title, author;
		
	void getvalue()
	{
		cout<<"Enter the title: ";
		cin>>title;
		cout<<"Enter the auther of book: ";
		cin>>author;
		cout<<"Enter the price: ";
		cin>>price;
	}
	void display()
	{
		cout<<"Title= "<<title<<" Author= "<<author<<" price= "<<price;
		
	}
	
};
class book: public publication
{
    public:
	 char pages;
	void get()	
	{
		getvalue();
		cout<<"Enter the pages of book:";
		cin>>pages;
		 
	}
	void show()
	{
		display();
		cout<< " pages= "<<pages;// by default it takes 'A' value but why?
		
	}
	void addBook()
	{
		show();
		
		cout<<"";//for avoid error
		
	}

};
int main()
{
	book b1;
	b1.addBook();

//	book b1;
//	b1.get();
//	b1.show();
//	return 0;
}