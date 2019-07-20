#include<stdio.h>
int main()
{
    int *p,x;
    p=&x;
    x=5;
    printf("%d\n",x);
    printf("%d\n",*p);
    printf("%d\n",p);
    printf("%u\n",&p);

    return 0;
}
