// Autumn-13, 4(c)
#include<iostream>
using namespace std;

int main()
{
    float i;
    for(i=0.50;i<=1.0;i=i+0.25)
    {
        cout.precision(5);
        cout.setf(ios::fixed,ios::floatfield);
        cout.width(7);
        cout << i;
        cout.width(10);
        cout << i*i << "\n";
    }
    return 0;
}
