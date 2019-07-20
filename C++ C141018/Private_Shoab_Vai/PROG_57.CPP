// Relational Operator( > ) Overloading
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
    bool operator > (myclass ob)    // ob=ob2
    {
        if((this->x > ob.x) && (this->y > ob.y))
            return true;
        else
            return false;
    }
};

int main()
{
    myclass ob1(10,1),ob2(3,4);
    if(ob1>ob2)
        cout << "ob1 is greater than ob2" << endl;
    else
        cout << "ob1 is not greater than ob2" << endl;
    return 0;
}
