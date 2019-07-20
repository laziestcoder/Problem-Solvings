#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,sum,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=n/2;
        sum=0;
        sum=4*n*(n+1);
        cout<<sum<<endl;
    }
    return 0;
}

