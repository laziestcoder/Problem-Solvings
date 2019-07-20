// Operator Overloading by passing value(15) to Function
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
    myclass operator+(int i)    // i = 15
    {
        myclass temp;
        temp.x=this->x+i;   // 25
        temp.y=this->y+i;   // 27
        return temp;
    }
};
int main()
{
    myclass ob1(10,12),ob2;
    ob2=ob1+15; // Passing Value(15) instead of Objects
    ob2.show(); // Output 25 27
    return 0;
}
