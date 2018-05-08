#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,cx,cy,r,px,py,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld %lld %lld",&cx,&cy,&r,&px,&py);
        long long int d1=cx-px;
        long long int d2=cy-py;
        long long int d = d1*d1 + d2*d2;
        if(d < r * r )
            printf("Case %lld: yes\n",i);
        else
            printf("Case %lld: no\n",i);
    }
    return 0;
}
