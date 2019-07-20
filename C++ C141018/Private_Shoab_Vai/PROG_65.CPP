// Operator overloading using friend function
#include<iostream>
using namespace std;

class myclass
{
    int x,y;
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
    friend myclass operator + (myclass ob1, myclass ob2);
};

myclass operator + (myclass ob1, myclass ob2)
{
    myclass temp;
    temp.x = ob1.x + ob2.x;
    temp.y = ob1.y + ob2.y;
    return temp;
}

int main()
{
    myclass ob1(10,12),ob2(5,4),ob3;
    ob3 = ob1 + ob2;
    ob3.show();
    return 0;
}
