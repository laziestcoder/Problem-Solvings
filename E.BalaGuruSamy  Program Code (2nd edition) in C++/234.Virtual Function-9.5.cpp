//9.5:Virtual Function(Page-234)
#include<iostream>
using namespace std;

class Base
{
    public:
    void display()
    {
        cout << "\n Display Base" << "\n";
    }
    virtual void show()
    {
        cout << "\n Show Base" << "\n";
    }
};

class Derived : public Base
{
    public:
    void display()
    {
        cout << "\n Display Derived" << "\n";
    }
    void show()
    {
        cout << "\n Show Derived" << "\n";
    }
};


int main()
{
    Base B;
    Derived D;
    Base *bptr;

    cout << "\n bptr point to Base \n";
    bptr = &B;

    bptr->display();
    bptr->show();

     cout << "\n bptr point to Derived \n";
    bptr = &D;

    bptr->display();
    bptr->show();
    return 0;
}


