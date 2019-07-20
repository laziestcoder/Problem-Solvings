// Balaguru, 9.5 Virtual Function
#include<iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "\n Display base ";
    }
    virtual void show()
    {
        cout << "\n show base";
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "\n Display derived";
    }
    void show()
    {
        cout << "\n Show derived";
    }
};
int main()
{
    Base B;
    Derived D;
    Base *bptr;

    cout << "\n bprt points to Base \n";
    bptr = &B;
    bptr -> display(); // calls Base version
    bptr -> show(); // calls Base version

    cout << "\n\n bprt points to Derived\n";
    bptr = &D;
    bptr -> display(); // calls Base version
    bptr -> show(); // calls Derived version

    return 0;
}
