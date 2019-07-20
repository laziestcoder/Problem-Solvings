//
//1043 - Triangle Partitioning

#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,r,x;
    int i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&x);
        //printf("%lf %lf\n",a,x);
        r=(a*(sqrt(x/(x+1))));
        printf("Case %d: %.10lf\n",i,r);
    }
}
