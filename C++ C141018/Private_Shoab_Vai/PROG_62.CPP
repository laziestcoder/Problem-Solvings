// Unary Operator( ++, increment operator ) Overloading
#include<iostream>
using namespace std;

class myclass
{
    int x,y;
public:
    myclass(int a, int b)
    {
        x=a;
        y=b;
    }
    myclass()
    {
        x=y=0;
    }
    void show()
    {
        cout << x << " " << y << endl;
    }
    myclass operator ++ ()
    {
        (this->x)++;
        (this->y)++;
        return *this;
    }
};

int main()
{
    myclass ob1(10,15),ob2;
    ob2=++ob1;
    ob1.show(); // Output 11 16 after ++
    ob2.show(); // Output 11 16
    return 0;
}

