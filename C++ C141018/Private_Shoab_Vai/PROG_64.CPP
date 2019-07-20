// Page: 228, Exercise: 02
#include<iostream>
using namespace std;

class three_d
{
    int x,y,z;
public:
    three_d(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }
    three_d()
    {
        x = y = 0;
    }
    void show()
    {
        cout << x << " " << y << " " << z << endl;
    }
    three_d operator + (three_d ob)
    {
        three_d temp;
        temp.x = this->x + ob.x;
        temp.y = this->y + ob.y;
        temp.z = this->z + ob.z;
        return temp;
    }
    three_d operator - (three_d ob)
    {
        three_d temp;
        temp.x = this->x - ob.x;
        temp.y = this->y - ob.y;
        temp.z = this->z - ob.z;
        return temp;
    }
    three_d operator ++ ()
    {
        (this->x)++;
        (this->y)++;
        (this->z)++;
        return *this;
    }
    three_d operator --()
    {
        (this->x)--;
        (this->y)--;
        (this->z)--;
        return *this;
    }
};

int main()
{
    three_d ob1(1,2,3),ob2(1,2,3),ob3;
    ob3 = ob1 + ob2;
    ob3.show(); // 2 4 6
    ob3 = ob1 - ob2;
    ob3.show(); // 0 0 0
    ob3 = ++ob1;
    ob3.show(); // 2 3 4
    ob3 = --ob1;
    ob3.show(); // Output 1 2 3 (Fromm --2 --3 --4)
    return 0;
}
