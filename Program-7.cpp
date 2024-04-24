#include<iostream>
using namespace std;

class base{

	
	public:
		virtual void print()
		{
				
			cout<<"Print Base Class"<<endl;
		}
		void show()
		{
			cout<<"Show Base Class"<<endl;
		}
};
class derived : public base
{
	public:
		virtual void print()
		{
			cout<<"My Name Is Krinshsmith Kava"<<endl;
			cout<<"220130318102"<<endl;
			cout<<"Print Derived Class"<<endl;		
		}	
		void show()
		{
			cout<<"Show Derived Class"<<endl;
		}
};
int main()
{
	base *b;
	derived d;
	b=&d;
	b->print();
	b->show();
	return 0;
}
