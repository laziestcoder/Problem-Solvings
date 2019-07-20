// Multiple Inheritance,P: 253
#include<iostream>
using namespace std;

class B1
{
    int a;
public:
    B1(int p) // p = 30
    {
        a = p; // a = 30
    }
    int geta()
    {
        return a;
    }
};

class D1 : public B1
{
    int b;
public:
    D1(int i, int j) : B1(j) // i = 20, j = 30
    {
        b = i; // b = 20
    }
    int getb()
    {
        return b;
    }
};

class D2 : public D1
{
    int c;
public:
    D2(int x, int y, int z) : D1(y, z) // x = 10, y = 20, z = 30
    {
        c = x; // c = 10
    }
    void show()
    {
        cout << geta() << " " << getb() << " " << c << endl;
    }
};

int main()
{
    D2 ob(10,20,30);
    ob.show(); // Output: 30 20 10

    return 0;
}
