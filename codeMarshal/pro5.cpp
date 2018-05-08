#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i,n,s=0,sum;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        sum=0;
        int d=n;
        while(n--)
        {
            cin>>s;
            sum+=s;
        }
        n=d;
        d=sum/n;
        printf("Case %d: %d\n",i,d);
    }
    return 0;
}
