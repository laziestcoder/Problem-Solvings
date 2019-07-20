#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,m,p,x,y;
    int t,i=0;
    cin>>t;
    while(t--)
    {
        i++;
        scanf("%lld%lld%lld",&n,&m,&p);
        x=p/m;
        y=p%m;
        printf("Case %d: %lld %lld\n",i,x,y);
    }
    return 0;
}
