// Logical Operator( ||, or operator ) Overloading
// || (or) operator overloading
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
        x=y=0;  // ob1(x,y), ob2(x,y)
    }
    bool operator || (myclass ob)
    {
        if((this->x || ob.x) && (this->y || ob.y))
            return true;
        else
            return false;
    }
};

int main()
{
    myclass ob1, ob2;   // ob1(x=0,y=0), ob2(x=0,y=0)
    if(ob1 || ob2)
        cout << "The result of or is true" << endl;
    else
        cout << "The result of or is false" << endl;    // Output

    return 0;
}

