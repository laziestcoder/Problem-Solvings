// Returning References, P: 149
#include<iostream>
using namespace std;

int x;  // Global Variable
int &f() // & dite hobe
{
    return x;
}
int main()
{
    f() = 10;   // Generally = er left side-e function thake na
    cout << x << endl;  // 10
    return 0;
}
