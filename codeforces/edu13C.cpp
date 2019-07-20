#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a,rc,bc,n,r,b,i,s,lcm;
    while(1) {
        s=0;
        cin>>n>>r>>b>>rc>>bc;
        lcm=(r*b)/__gcd(r,b);
        if(rc>bc)
            {
                s+=(n/r)*rc;
                s+=(n/b)*bc;
                s-=(n/lcm)*bc;
            }
            else
            {
                s+=(n/r)*rc;
                s+=(n/b)*bc;
                s-=(n/lcm)*rc;

            }
        cout<<s<<endl;

    }
    return 0;
}
