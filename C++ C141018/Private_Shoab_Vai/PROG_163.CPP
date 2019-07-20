// Handling Exceptions Thrown by new, P: 402
#include<iostream>
using namespace std;

int main()
{
    double *p;
    while(1)
    {
        p = new(nothrow)double[100000]; // ata kaj na korle p=0 hobe
        if(p==0)
        {
            cout << "Allocation error";
            return 1;
        }
    }
    return 0;
}
