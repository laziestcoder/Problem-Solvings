// Using default Arguments
#include<iostream>
using namespace std;

void f(int a = 13, int b = 10)
{
    cout << a << " " << b << endl;
}
int main()
{
    f(1,2); // 1 2
    f(10);  // 10 10
    f();    // 13 10

    return 0;
}
