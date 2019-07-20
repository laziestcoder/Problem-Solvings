// P: 257
#include<iostream>
using namespace std;

class B1
{
public:
    B1()
    {
        cout << "Constructing B1\n";
    }
    ~B1()
    {
        cout << "Destructing B1\n";
    }
};

class B2
{
    int b;
public:
    B2()
    {
        cout << "Constructing B2\n" ;
    }
    ~B2()
    {
        cout << "Destructing B2\n";
    }
};

// Inherit two base classes.
class D : public B1, public B2 // public 1bar likhleo kaj korbe
{
public:
    D()
    {
        cout << "Constructing D\n";
    }
    ~D()
    {
        cout << "Destructing D\n";
    }
};

int main()
{
    D ob;

    return 0;
}
