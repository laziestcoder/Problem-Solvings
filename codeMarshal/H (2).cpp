#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int t,cas,ans=0;
    cin>>t;
    for(cas=1; cas<=t; cas++)
    {
        long long int m,a=0,b=0,c=0,x;
        cin>>m;
        a=m-3;
        b=2;
        c=1;
        ans=1;
        for(c=1 ; c <  b && b <a ; c++ , a-- )
        {
            ans++;
            for(b=2 ; b < a ; b++, a--)
                {
                    ans++;
                }
        }

        printf("Case %lld: %lld\n",cas, ans);
    }
    return 0;
}

