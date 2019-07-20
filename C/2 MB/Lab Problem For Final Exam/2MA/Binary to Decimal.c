//Problem
#include<stdio.h>
#include<math.h>
int main()
{
    int bin,dec=0,p=0,rem,div;
    scanf("%d",&bin);
    while(bin!=0)
    {
        rem=bin%10;
        div=bin/10;
        dec=dec+rem*pow(2,p);
        p++;
    }
    printf("%d",dec);
    return 0;
}
