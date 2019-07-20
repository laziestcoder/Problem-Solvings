#include<stdio.h>

int main()
{
    int n,i,x;
    float sum=0,avg;
    printf("Input n : ");
    scanf("%d",&n);
    printf("Input %d numbers : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
    avg=sum/n;
    printf("Total : %.0lf\nAverage : %.2lf",sum,avg);
    return 0;
}
