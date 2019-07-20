#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,n,i,j,x1=0,x2=0,x0=0;
    long long int x[1000];
    scanf("%d",&t);
        for(j=1; j<=t; j++)
    {
        x1=0;
        x2=0;
        x0=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&x[i]);
            if(x[i]>0 && x[i]<=100)
                x1++;
            else if(x[i]>=-100 && x[i]<0 )
                x2++;
            else if(x[i]==0)
                x0++;
        }
        printf("%d %d %d\n",x1,x2,x0);
    }

    return 0;
}

