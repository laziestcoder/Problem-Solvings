// Ambiguity, P: 185
#include<iostream>
using namespace std;

void f(int x)
{
    cout << x << endl;
}

void f(unsigned int x)
{
    cout << x << endl;
}

int main()
{
    f(4100100100);  // Problem
    f(-10);
    f(100);
    return 0;
}
