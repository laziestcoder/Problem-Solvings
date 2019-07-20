#include<bits/stdc++.h>
using namespace std;
long long int mypo(long long int x)
{
    int s=1, d;
    for(d=1; d<=x; d++ )
     s=s*d;

     return s;
}

int main ()
{
    long long int t,i,n,sum,k,j;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        sum=0;
        cin >> n;
        for(j=1; j<=n ; j++)
        {
            k=j+1;
            sum=(sum+(mypo(k)/(mypo(2)*mypo(k-2)))%1000000007)%1000000007;

        }

        cout <<"Case " << i <<": " <<sum*2 <<endl;

    }

    return 0;
}

