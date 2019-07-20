#include<stdio.h>

int main()
{
    int a,b,add,sub,mul;
    float div;
    scanf("%d%d",&a,&b);

    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    printf("%d %d %d %f",add,sub,mul,div);

    return 0;
}
