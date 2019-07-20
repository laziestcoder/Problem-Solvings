#include<iostream>
using namespace std;

void min(double a,double b)
{
    if(a < b)
        cout << a << endl;
    else
        cout << b << endl;
}
void min(char ch1,char ch2)
{
    if(ch1 < ch2)
        cout << ch1 << endl;
    else
        cout << ch2 << endl;
}
int main()
{
    min(10.3,3.1);
    min('z','a');
    return 0;
}
