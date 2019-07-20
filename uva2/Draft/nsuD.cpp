#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll int t,i,r,j,f,a,b,c,n;



ll int fact( ll int n )
{
    f=1;
    for(j=n;j>n-2;j--)
    {
        f=f*j;
    }
    return f;
}
int main ()
{
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        n=a+b+c;
        cout<<"Case #"<<i<<": "<<fact(n)<<endl;
    }
    return 0;
}
