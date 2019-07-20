// Inline Functions
#include<iostream>
using namespace std;
inline int add(int x,int y)
{
    return x + y;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << add(a,b) << endl; // add(a,b) will be replaced by a+b
    return 0;
}
