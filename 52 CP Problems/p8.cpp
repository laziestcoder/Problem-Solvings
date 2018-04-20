#include<iostream>
#include<cstdio>
#include<string>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main ()
{
    int t,a[6];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
        printf("%.0lf\n",(a[0]+a[1]+a[2]+a[3]+a[4])*1.0/5);
    }
    return 0;
}
