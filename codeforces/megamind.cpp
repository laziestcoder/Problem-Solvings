//#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main ()
{
    long long int n, a,b,sum1=0,sum2=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        sum1+=a;
        sum2+=b;
    }
    cout<<sum2-sum1<<endl;
    return 0;
}
