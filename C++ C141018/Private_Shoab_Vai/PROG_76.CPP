// P: 235
#include<iostream>
using namespace std;

class base
{
    int x;
public:
    void set_x(int a)
    {
        x = a;
    }
    void show_x()
    {
        cout << x << endl;
    }
};

class derived:public base
{
    int y;
public:
    void set_y(int b)
    {
        y = b;
    }
    void show_y()
    {
        cout << y << endl;
    }
};

int main()
{
    derived ob;
    ob.set_x(10);
    ob.set_y(20);

    ob.show_x();
    ob.show_y();

    return 0;
}
