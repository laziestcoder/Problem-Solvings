#include<iostream>
using namespace std;

class myclass
{
    int x,y,z;
public:
    myclass(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }
    myclass()
    {
        x = y = z = 0;
    }
    void show()
    {
        cout << x << " " << y << " " << z << endl;
    }
    myclass operator + (int i)
    {
        myclass temp;
        temp.x = this->x + 15;
        temp.y = this->y + 15;
        temp.z = this->z + 15;
        return temp;
    }
};
int main()
{
    myclass ob1(10,12,14),ob2;
    ob2 = ob1 + 15;
    ob2.show();
    return 0;
}
