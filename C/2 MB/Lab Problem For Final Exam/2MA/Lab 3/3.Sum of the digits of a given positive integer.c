#include<stdio.h>
int main()
{
    int num,d,r,sum;
    printf("Input Number : ");
    scanf("%d",&num);
    sum=0;
    while(num!=0)
    {
        d=num/10;
        r=num%10;
        sum=sum+r;
        num=d;
    }
    printf("Sum of digits : %d",sum);
    return 0;
}
