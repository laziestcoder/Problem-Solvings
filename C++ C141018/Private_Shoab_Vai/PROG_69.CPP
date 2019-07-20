// Unary operator overloading using Friend function
#include<iostream>
using namespace std;

class myclass
{
    int x, y;
public:
    myclass(int a, int b)
    {
        x = a;
        y = b;
    }
    myclass()
    {
        x = y = 0;
    }
    void show()
    {
        cout << x << " " << y << endl;
    }
    friend void operator ++ (myclass &o);
};

void operator ++ (myclass &o)   // & na dile value change(++ob) hobe na
{
    o.x = o.x + 1;
    o.y = o.y + 1;
}

int main()
{
    myclass ob(10,12);
    ++ob;
    ob.show();  // 11 13
    return 0;
}
