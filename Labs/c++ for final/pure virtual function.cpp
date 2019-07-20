
#include<iostream>

using namespace std;


class Base          //Abstract base class
{
 public:
 virtual void show()=0;            //Pure Virtual Function

};



class Derived:public Base
{
 public:
 void show()
 { cout << "\nImplementation of Virtual Function in Derived class\n"; }
};

int main()
{
 Base *b;   /// i cannot create an object of that class

 Derived d;
    b=&d;

 b->show();
}
