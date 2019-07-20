// Logical Operator( &&, and operator ) Overloading
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
    bool operator && (myclass ob)
    {
        if((this->x && ob.x) && (this->y && ob.y))
            return true;
        else
            return false;
    }
};

int main()
{
    myclass ob1(0,15), ob2(14,0);
    if(ob1 && ob2)
        cout << "The result of and is true" << endl;
    else
        cout << "The result of and is false" << endl;   // Output

    return 0;
}

