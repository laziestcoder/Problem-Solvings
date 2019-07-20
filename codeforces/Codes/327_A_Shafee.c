#include<stdio.h>
int main()
{
    double s,l,p,q,x,y;
    scanf("%lf%lf%lf",&l,&p,&q);
    s=p+q;
    x=(p*100.00)/s;
    y=(x*l)/100.00;
    printf("%g\n",y);
    return 0;
}
