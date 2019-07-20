#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main ()
{
    lli s,t,n,a,b,i;
    scanf("%lld",&t);
    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld",&s);
        n=ceil(sqrt ((double) s));

        if(n*n-s<n)
        {
            a=n;
            b=(n*n)-s+1;
        }
        else
        {
            b=n;
            a=s-((n-1)*(n-1));
        }
       if(n&1)
          swap(a,b);
        cout<<"Case "<<i<<": "<<a<<" "<<b<<endl;

    }

    return 0;
}
