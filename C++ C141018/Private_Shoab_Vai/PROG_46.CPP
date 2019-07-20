//Herbert Schildt: Page: 145, Ex: 1
// Using a Reference parameter
#include<iostream>
using namespace std;

void neg(int &ref)
{
    ref = ref * (-1);
}
int main()
{
    int x;
    x = 5;
    neg(x);
    cout << x << endl; // -5
    return 0;
}
