// Example of Multilevel Inheritance
#include<iostream>
using namespace std;

class b1
{
public:
    b1()
    {
        cout << "Constructing base-1" << endl;
    }
    ~b1()
    {
        cout << "Destructing base-1" << endl;
    }
};

class d1 : public b1
{
public:
    d1()
    {
        cout << "Constructing derived-1" << endl;
    }
    ~d1()
    {
        cout << "Destructing derived-1" << endl;
    }
};

class d2 : public d1
{
public:
    d2()
    {
        cout << "Constructing derived-2" << endl;
    }
    ~d2()
    {
        cout << "Destructing derived-2" << endl;
    }
};

int main()
{
    d2 ob;

    return 0;
}
