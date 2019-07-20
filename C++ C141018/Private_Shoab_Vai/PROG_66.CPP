// Operator overloading using friend function. ob2 = ob1 + 10;
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
    friend myclass operator + (myclass o, int i);
};

myclass operator + (myclass o, int i)   // o = ob1, i = 10
{
    myclass temp;
    temp.x = o.x + i;
    temp.y = o.y + i;
    return temp;
}

int main()
{
    myclass ob1(10,12),ob2;
    ob2 = ob1 + 10;
    ob2.show(); // 20 22
    return 0;
}
