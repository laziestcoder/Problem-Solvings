// Operator Overloading
// binary operator left operand call kore
// right operand is passed as parameter
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
    void show()
    {
        cout << x << " " << y << endl;
    }
    myclass()
    {
        x=y=0;
    }
    myclass operator+(myclass ob)
    {
        myclass temp;
        temp.x=this->x+ob.x;    // ob1.x(10)+ob2.x(5)

        temp.y=this->y+ob.y;    // ob1.y(12)+ob2.y(6)
        return temp;
    }
};

int main()
{
    myclass ob1(10,12),ob2(5,6),ob3;
    ob3=ob1+ob2; // binary operator left operand(ob1) call kore
    ob3.show();  // right operand(ob2) is passed as parameter
    return 0;
}
