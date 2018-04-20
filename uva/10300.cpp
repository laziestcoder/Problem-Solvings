#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,i,j,a,b,c,n,sum;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%lld",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%lld%lld%lld",&a,&b,&c);
            sum=sum+(a*c);
        }
        cout<<sum<<endl;

    }
    return 0;
}
