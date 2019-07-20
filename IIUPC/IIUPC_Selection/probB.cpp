#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t=0,i;
    double x,y,a,b,c,d;
    cin >> t;
    for(i=1 ; i<=t; i++)
    {
        a=0; b=0; c=0; d=0;
        x=0; y=0;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        x=a/b;
        y=c/d;
        if(x>y)
            printf("Case %d: %.0lf/%.0lf",i,a,b);
        else if(x==y)
            printf("Case %d: Equivalent",i);
        else if(x<y)
            printf("Case %d: %.0lf/%.0lf",i,c,d);

            printf("\n");

    }
    return 0;
}
