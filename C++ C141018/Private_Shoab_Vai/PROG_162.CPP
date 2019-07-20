// Handling Exceptions Thrown by new, P: 402
#include<iostream>
using namespace std;

int main()
{
    double *p;
    while(1)
    {
        try // object throw korbe
        {
            p = new double[100000];
        }
        catch(bad_alloc xa) // xa hocche object
        {
            cout << "Allocation failure";
            return 1;
        }
    }
    return 0;
}
