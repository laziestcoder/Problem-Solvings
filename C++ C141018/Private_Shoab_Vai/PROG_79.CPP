// P: 237
#include<iostream>
using namespace std;

class base
{
    int x;
public:
    void setx(int n)
    {
        x = n;
    }
    void showx()
    {
        cout << x << '\n';
    }
};

// Inherit base as private
class derived : private base
{
    int y;
public:
    void sety(int n)
    {
        y = n;
    }
    void showy()
    {
        cout << y << 'n';
    }
};

int main()
{
    derived ob;

    ob.setx(10); // ERROR - now private to derived class
    ob.sety(20); // access member of derived class - ok

    ob.showx(); // ERROR - now private to derived class
    ob.showy(); // access member of derived class - ok

    return 0;
}
