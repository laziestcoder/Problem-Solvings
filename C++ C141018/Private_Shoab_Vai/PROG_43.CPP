// Call by reference using Reference
#include<iostream>
using namespace std;

void f(int &x)
{
    x=10;
}
int main()
{
    int a=-5;
    f(a);
    cout << a << endl;  // 10
    return 0;
}
