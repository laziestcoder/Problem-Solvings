#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll arr[100000];

ll int mypow( ll int x, ll int y)
{
    ll int z=1,n;
    for(n=1; n<=y; n++)
    {
        z=z*x;
    }
    return z;
}


int main ()
{
    ll int a,b,t,p,i,j,k,q,count=0;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        p=mypow(a,b);
        count=0;
        for(int j=1; j<=p; j++)
        {

            for(k=1; k<sqrt(p); k++)
            {
                q=mypow(j,k);
                if(p==q && a!=j && b!=k)
                        count++;
                if(q>p)
                    break;
            }
        }

        cout<<"Case "<<i<<": "<<count<<endl;
    }
    return 0;
}
