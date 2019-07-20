#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string x;                /// size of x is x.size()
    int sum=0,i;
    cin >> x;
    for(int i=0; i<x.size(); i++)
    {
        sum=((sum*10)+(x[i]-'0')%4)%4;  /// mod by 4
        cout << sum <<endl;
    }
    cout << sum <<endl;
    return 0;
}
