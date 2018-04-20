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
        a[0]=a[1]=a[2]=a[3]=a[4]=a[5]=0;
        scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
        sort(a+0,a+6);
        printf("%d %d\n",a[5],a[1]);
    }
    return 0;
}
