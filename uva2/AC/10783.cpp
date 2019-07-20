#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long int n,m,sum=0,k=1;
        cin>>n>>m;
        for(int j=n; j<=m; j+=k)
        {
            if(j%2==1)
             {
                 sum+=j;
                 k=2;
             }
        }
        printf("Case %d: %lld\n",i,sum);
    }
    return 0;
}
