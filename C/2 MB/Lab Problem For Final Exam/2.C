#include<stdio.h>
int main()
{
    int n,*p,i,sum=0;
    float ave;
    printf("Enter the number of values:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&p[i]);
    }

    for(i=0;i<=n-1;i++)
    {
        sum=sum+p[i];
    }
    ave=sum/(float)n;
    printf("%f",ave);
}
