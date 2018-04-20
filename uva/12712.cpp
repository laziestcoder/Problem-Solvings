/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define lld long long
#define mod 10000000000007
int main ()
{
    lld int i,j,sum,l,m,n,t,x,k,p;
    cin >> t;
    for(i=1; i<=t ; i++)
    {
        cin >> l>>m>>n;
        l*=l;
        sum=0;
        x=1;
        for(j=(l-m)+1; j<=l; j++)
        {
            x=(x*(j%mod))%mod;
        }

        for(j=m; j<=n; j++)
        {
            sum=(sum+x%mod)%mod;
            x=(x*((l-j)%mod))%mod;
        }
        cout <<"Case "<< i <<": " <<sum << endl;

    }
    return 0;
}
