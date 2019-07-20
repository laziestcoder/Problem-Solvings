// Generic Function/Template Function
#include<iostream>
using namespace std;

template<typename w>
void swap1(w &a,w &b)
{
    w t;
    t = a;
    a = b;
    b = t;
}

int main()
{
    int x = 10,y = 20;
    swap1(x,y);
    cout << x << " " << y << endl;
    float f1 = 2.5,f2 = 3.2;
    swap1(f1,f2);
    cout << f1 << " " << f2 << endl;
    return 0;
}
