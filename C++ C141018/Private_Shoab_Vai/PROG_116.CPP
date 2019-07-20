#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i;
    cout.fill('*');
    for(i=1;i<=5;i++)
    {
        cout.width(3);
        cout << i;
        cout.width(10);
        cout.precision(4);
        cout.setf(ios::fixed,ios::floatfield);
        cout << 1.0/i;
        cout.width(14);
        cout.precision(4);
        cout.setf(ios::scientific,ios::floatfield);
        cout << sqrt(i) << endl; // **1****1.0000***1.0000e+000
    }
    return 0;
}


