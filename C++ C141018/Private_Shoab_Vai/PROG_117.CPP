#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int i;
    cout << setfill('*');
    for(i=1;i<=5;i++)
    {
        cout << setw(3) << i;
        cout << setw(10) << setprecision(4) << setiosflags(ios::fixed); // set
        cout << 1.0/i << resetiosflags(ios::fixed); // reset
        cout << setw(14) << setprecision(4);
        cout << setiosflags(ios::scientific) << sqrt(i) << endl; // set
        cout << resetiosflags(ios::scientific); // reset
    }
    return 0;
}


