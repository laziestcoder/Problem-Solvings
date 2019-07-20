#include<stdio.h>
#include<math.h>
int main()
{
    int bin,dec=0,d,r,p=0;
    scanf("%d",&bin);
    while(bin!=0)
    {
        r=bin%10;
        d=bin/10;
        dec=dec+r*pow(2,p);
        p++;
        bin=d;
    }
    printf("%d",dec);

    return 0;
}
