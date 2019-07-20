#include<bits/stdc++.h>
using namespace std;

long long int lcmf(long long int x,long long int y)
{
    long long int a, b, t, gcd, lcm;
    a = x;
    b = y;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }

    gcd = a;
    lcm = (x*y)/gcd;
    return lcm;

}

int main ()
{
    long long int t1,i,j,k,n,p,max;
    cin>>t1;
    for(i=1; i<=t1; i++)
    {
        cin>>n;
        max=0;
        for(j=1; j<=n; j++)
        {
            for(k=j; k<=n; k++)
            {
                p=lcmf(j,k);
                if(max<p)
                    max=p;
            }
        }
        cout<<max<<endl;

    }
    return 0;

}
