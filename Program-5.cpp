#include<iostream>
using namespace std;

class employee{
	
	public:
		int id;
		string name;
		int salary;
		employee(int id,string name,int salary)
			{
				this->id=id;
				this->name=name;
				this->salary=salary;	
			}
			void display()
			{
				cout<<"My Name Is Krinshsmith Kava"<<endl;
				cout<<"220130318102"<<endl;
				cout<<"Id Is ::"<<id<<endl;
				cout<<"Name Is ::"<<name<<endl;
				cout<<"Salary Is ::"<<salary<<endl;
			}
};
int main()
{
	employee e1(102,"Krinshsmith",100000);
	employee e2(104,"Rahul",50000);
	e1.display();
	e2.display();
	return 0;
}
