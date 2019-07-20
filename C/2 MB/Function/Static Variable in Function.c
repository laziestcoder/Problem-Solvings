#include<stdio.h>
void f()
{
    static int x=0;
    x=x+1;
    printf("%d\n",x);
}
int main()
{
    f();
    f();
    f();
    return 0;
}
