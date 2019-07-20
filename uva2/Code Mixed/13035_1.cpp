#include<bits/stdc++.h>
using namespace std;
#define MD 1000000007

int main ()
{
    //freopen("in.txt","r",stdin);

    long long int t,i,n,ans,k,j,bl;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;

        ans=0;
        bl=0;

        for(j=n; j>=1 ; j--)
        {
            k=j+1;
            bl=(k%MD)*((k-1)%MD);
            ans=(ans+bl)%MD;
        }
        cout <<"Case " << i <<": " <<ans <<endl;
    }
    return 0;
}

