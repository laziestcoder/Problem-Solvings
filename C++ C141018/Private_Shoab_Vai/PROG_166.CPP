// Virtual Function
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
    for(int i=1;i<=10;i++)
    {
        if(i%2==1)
            p = &d_ob1;
        else
            p = &d_ob2;
        p->func();
    }
    return 0;
}
