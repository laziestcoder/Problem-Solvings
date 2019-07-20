// P: 241, Using Protected Members
#include<iostream>
using namespace std;

class samp
{
    int a;
protected:
    int b;
public:
    int c;
    samp(int n, int m)
    {
        a = n;
        b = m;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
};

int main()
{
    samp ob(10,20);
    ob.b = 99;
    ob.c = 30;
    cout << ob.geta() << " ";
    cout << ob.getb() << " " << ob.c << endl;

    return 0;
}
