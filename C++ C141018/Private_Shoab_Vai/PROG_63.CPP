// Overloading Binary Operator (* and /)
// Page: 206, Exercise: 1
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
        x=y=0;
    }
    void show()
    {
        cout << x << " " << y << endl;
    }
    myclass operator * (myclass ob)
    {
        myclass temp;
        temp.x = this->x * ob.x;
        temp.y = this->y * ob.y;
        return temp;
    }
    myclass operator / (myclass ob)
    {
        myclass temp;
        temp.x = this->x / ob.x;
        temp.y = this->y / ob.y;
        return temp;
    }
};

int main()
{
    myclass ob1(5,10),ob2(5,5),ob3;
    ob3 = ob1 * ob2;
    ob3.show(); // Output 25 50
    ob3 = ob1 / ob2;
    ob3.show(); // Output 1 2
    return 0;
}
