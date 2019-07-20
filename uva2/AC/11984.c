#include<stdio.h>
int main ()
{
    float i,t,c,d,f;
    scanf("%f",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%f%f",&c,&d);
        f=((9.0/5.0)*c)+32;
        c=(5.0/9.0)*(f+d-32);
        printf("Case %.0f: %.2f\n",i,c);
    }
    return 0;
}
