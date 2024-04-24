#include<iostream>
using namespace std;

class animal{
	
	public:
		void eat()
		{
				cout<<"Eating...:)"<<endl;
		}
};
class dog : public animal
{
	public:
		void eat()
		{
			cout<<"My Name Is Krinshsmith Kava"<<endl;
			cout<<"220130318102"<<endl;
			cout<<"Dog Eating Bread...:"<<endl;		
		}	
};
int main()
{
	dog d=dog();
	d.eat();
	return 0;
}
