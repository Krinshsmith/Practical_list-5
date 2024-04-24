#include<iostream>
using namespace std;
class Vehicle
{
  public :
          vehicle()
          {
            cout<<"My Name Is Krinshsmith Kava"<<endl;
            cout<<"220130318102"<<endl;
            cout<<"This Is A Vehicle"<<endl;
          }
};
class car : public vehicle
{
  
};
int main()
{
  Vehicle v;
  car obj;
  return 0;
}
