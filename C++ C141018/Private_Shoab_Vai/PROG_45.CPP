//Herbert Schiltd: Page: 145, Ex: 1
#include<iostream>
using namespace std;

void neg(int *ptr)
{
    *ptr = (*ptr)*(-1);
}
int main()
{
    int x;
    x = 5;
    neg(&x);
    cout << x << endl; // Output: -5
    return 0;
}
