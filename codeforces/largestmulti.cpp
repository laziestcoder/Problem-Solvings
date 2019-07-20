#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,i,a,b,c;
    cin>>t;
    for(i=1; i<=t;i++)
    {
        cin>>a>>b;
        c=a/b;
        c=c*b;


        printf("Case %lld: %lld\n",i,c);
    }
    return 0;
}
