// Unary operator overloading using friend function
// postfix(ob2++) with equal ob2 = ob++
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
    friend myclass operator ++ (myclass &o, int notused);
};

myclass operator ++ (myclass &o, int notused)
{
    o.x = o.x + 1;
    o.y = o.y + 1;
    return o;
}

int main()
{
    myclass ob(10, 12), ob2;
    ob2 = ob++; // postfix(ob++) with equal
    ob2.show(); // 11 13
    return 0;
}
