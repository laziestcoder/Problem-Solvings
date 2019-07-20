#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,l,r,sum,i,b;
    cin>>t;
    while(t--)
    {
        b=0;
        scanf("%lld%lld",&l,&r);
        sum=0;
        for(i=1; i<=r; i++)
            {
                b^=i;
                if(i>=l && i<=r)
                    sum=sum+b;
            }
        cout<<sum<<endl;
    }
    return 0;
}
