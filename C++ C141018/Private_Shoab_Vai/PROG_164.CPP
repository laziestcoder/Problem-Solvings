// Pointers to Derived Classes, P: 347,348
#include<iostream>
using namespace std;

class base
{
    int x;
public:
    void setx(int i)
    {
        x = i;
    }
    int getx()
    {
        return x;
    }
};

class derived:public base
{
    int y;
public:
    void sety(int j)
    {
        y = j;
    }
    int gety()
    {
        return y;
    }
};

int main()
{
    base *p;
    base b_ob;
    derived d_ob;

    p = &b_ob;
    p->setx(10);
    cout << p->getx() << endl; // 10

    p = &d_ob; // No problem, d_ob(derived), p (base)
    p->setx(99);
    d_ob.sety(13); // p->sety(13) lekha jabe na

    cout << p->getx() << endl; // 99
    cout << d_ob.gety() << endl; // 13
    return 0;
}
