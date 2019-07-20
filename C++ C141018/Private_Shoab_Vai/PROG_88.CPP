// P: 255(2 No:)
#include<iostream>
using namespace std;

class B1
{
    int a;
public:
    B1(int x) // x = 30
    {
        a = x; // a = 30
    }
    int geta()
    {
        return a;
    }
};

class B2
{
    int b;
public:
    B2(int i) // i = 20
    {
        b = i; // b = 20
    }
    int getb()
    {
        return b;
    }
};

class D : public B1, B2
{
    int c;
public:
    D(int p, int q, int r) : B1(r), B2(q) // p = 10, q = 20, r = 30
    {
        c = p; // c = 10
    }
    void show()
    {
        cout << geta() << " " << getb() << " " << c << endl;
    }
};

int main()
{
    D ob(10, 20, 30);
    ob.show(); // Output: 30,20,10

    return 0;
}
