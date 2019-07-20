// Union
#include<iostream>
using namespace std;
union u
{
    int a;
    char ch;
    double d;
};
int main()
{
    u ob;
    ob.a = 13;
    ob.ch = 'x';
    ob.d = 3.1415;
    cout << ob.a; // Garbage value Print korbe
    return 0;
}
