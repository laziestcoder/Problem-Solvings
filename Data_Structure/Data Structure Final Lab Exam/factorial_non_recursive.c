/*
factorial non recursive
*/

#include<stdio.h>

int main()
{
    double term=1;
    int n, i;
    printf("input a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        term*=i;
    printf("factorial(%d) : %.0lf\n",n,term);
    return 0;
}
