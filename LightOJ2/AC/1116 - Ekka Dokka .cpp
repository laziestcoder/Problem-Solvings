#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,i,n,m,w,j;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&w);
        bool f = 1;
        if(w%2!=0)
        {
            printf("Case %lld: Impossible\n",i);
        }
        for(j=2; j<=w/2; j*=2)
        {
            if(w%j==0 && (w/j)%2!=0)
            {
                printf("Case %lld: %lld %lld\n",i,w/j, j);
                break;
            }
        }
    }

    return 0;
}
