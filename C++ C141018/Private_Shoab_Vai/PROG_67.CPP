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
    friend myclass operator + (int i, myclass ob);
};

myclass operator + (int i, myclass ob)
{
    myclass temp;
    temp.x = ob.x + i;
    temp.y = ob.y + i;
    return temp;
}

int main()
{
    myclass ob1(10,12),ob2;
    ob2 = 10 + ob1;
    ob2.show();
    return 0;
}
