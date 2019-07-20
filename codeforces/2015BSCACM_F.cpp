#include<bits/stdc++.h>
using namespace std;
#define ex 1e-9
int main ()
{
    int n,i,j;
    double sum=0 ;
    long long int l,r;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        sum=0;
        scanf("%lld %lld",&l,&r);

            sum=(1.0/l)-(1.0/(r+1));
            printf("%.12lf\n",sum);
    }

    return 0;
}
