// Left shift( << ) operator overloading
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
    myclass operator << (int i)
    {
        myclass temp;
        temp.x = this->x << i;  // 10 << 3, 10 * 2^3, 80
        temp.y = this->y << i;  // 12 << 3, 12 * 2^3, 96
        return temp;
    }
};

int main()
{
    myclass ob1(10,12),ob2;
    ob2 = ob1 << 3; // << is a Binary operator. Ex: ob2 = ob1 + 5
    ob2.show(); // 80 96
    return 0;
}
