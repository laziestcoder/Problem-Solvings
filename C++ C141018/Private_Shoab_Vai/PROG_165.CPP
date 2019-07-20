// Virtual Function, P: 349
#include<iostream>
using namespace std;

class base
{
public:
    virtual void func() // one interface
    {
        cout << "base version of function\n";
    }
};

class derived1:public base
{
public:
    void func() // multiple method
    {
        cout << "derived 1 version of function\n";
    }
};

class derived2:public base
{
public:
    void func() // multiple method
    {
        cout << "derived 2 version of function\n";
    }
};

int main()
{
    base b_ob;
    derived1 d_ob1;
    derived2 d_ob2;
    base *p;

    p = &b_ob;
    p->func(); // base version of function

    p = &d_ob1;
    p->func(); // derived 1 version of function

    p = &d_ob2;
    p->func(); // derived 2 version of function

    return 0;
}
