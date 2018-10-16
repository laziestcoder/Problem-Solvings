#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main ()
{
    lli t,i,a,b,c;
    scanf("%lld",&t);
    for(i=1; i<=t ; i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a==1 || b==1 )
            printf("Case %lld: %lld\n",i,c=a*b);
        else if(b==2 || a==2)
        {
            c=((a*b)/8)*4;
            if((a*b)%8==2)
                c+=2;
            else if((a*b)%8==6 || (a*b)%8==4)
                c+=4;
            printf("Case %lld: %lld\n",i,c);
        }
        else
            printf("Case %lld: %lld\n",i,((a*b)+1)/2);
    }
    return 0;
}
