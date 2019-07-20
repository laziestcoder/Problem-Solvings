#include<stdio.h>
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int main()
{
    int x,y,t;
    scanf("%d%d",&x,&y);
    t=add(x,y);
    printf("%d",t);

    return 0;
}
