#include<stdio.h>
int change(int a,int b)
{
    a--;
    b--;
}
int main()
{
    int a,b;
    a=10;
    b=5;
    change(a,b);
    printf("%d %d",a,b);

    return 0;
}
