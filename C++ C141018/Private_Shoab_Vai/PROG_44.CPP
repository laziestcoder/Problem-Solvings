/*Swap program(call by reference) using Reference*/
#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
int main()
{
    int a,b;
    a=10;
    b=25;
    swap(a,b);
    cout << a << " " << b << endl;  // After Swaping: 25 10
    return 0;
}
