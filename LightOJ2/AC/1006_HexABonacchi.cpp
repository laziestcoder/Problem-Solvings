#include<bits/stdc++.h>
using namespace std;
#define inll long long int
#define m 10000007

inll a, b, c, d, e, f,n;
int main ()
{
    inll n, caseno = 0, cases,t,i;
    scanf("%lld", &cases);
    while( cases-- )
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        if(n>0)
        {

            for(i=n; i>0 ; i--)
            {
                t=a%m+b%m+c%m+d%m+e%m+f%m;
                a=b;
                b=c;
                c=d;
                d=e;
                e=f;
                f=t;
            }

        }
        n=a%m;
        printf("Case %lld: %lld\n", ++caseno, n % m);
    }

    return 0;

}
