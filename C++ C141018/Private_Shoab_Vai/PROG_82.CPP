//// P: 246, Prog: 2
// Output:
// Constructing base class
// Constructing derived class
// 10
// Destructing derived class
// Destructing base class
#include<iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Constructing base class\n";
    }
    ~base()
    {
        cout << "Destructing base class\n";
    }
};

class derived : public base
{
    int j;
public:
    derived(int n)
    {
        cout << "Constructing derived class\n";
        j = n;
    }
    ~derived()
    {
        cout << "Destructing derived class\n";
    }
    void showj()
    {
        cout << j << '\n';
    }
};

int main()
{
    derived o(10);

    o.showj();

    return 0;
}
