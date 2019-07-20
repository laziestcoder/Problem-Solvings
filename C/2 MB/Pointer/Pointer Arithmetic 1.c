#include<stdio.h>
int main()
{
    int *p1,*p2,x,y,d;
    p1=&x;
    p2=&y;
    printf("%u %u\n",p1,p2);
    d=p2-p1;
    printf("%d",d);

    return 0;
}
