// Problem
#include<iostream>
using namespace std;

class myclass
{
    int a,b;
public:
    int c;
    void set_ab(int i, int j)
    {
        a = i;
        b = j;
    }
    void get_ab(int &i, int &j)
    {
        i = a;
        j = b;
    }
};

class derived1:public mybase
{
public:
    int c;
    get_ab();
    get_ab();
};

class derived2:private mybase
{
private:
    int c;
    set_ab();
    set_ab();
};

int main()
{
    derived1 o1;
    derived2 o2;

    int i,j;

    o1.set_ab(i,j);
    o2.set_ab(i,j);

    o1.c = 10;
    o2.c = 10;

    return 0;
}
