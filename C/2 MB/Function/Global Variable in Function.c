#include<stdio.h>
int x;
int f1();
int f2();
int f3();

int main()
{
    int m,n,o;
    x=10;
    printf("%d\n",x);
    m=f1();
    printf("%d\n",m);
    n=f2();
    printf("%d\n",n);
    o=f3();
    printf("%d\n",o);

    return 0;
}
int f1()
{
    x=x+10;
    return x;
}
int f2()
{
    int x;
    x=1;
    return x;
}
int f3()
{
    x=x+10;
    return x;
}
