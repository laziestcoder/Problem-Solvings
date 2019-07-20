#include<stdio.h>
int main()
{
    int a,size,i,j,k;
    printf("How many numbers to be sorted: ");
    scanf("%d",&size);
    int num[size];
    for(i=1;i<=size;i++)
    {
        scanf("%d",&num[i]);
    }
    for(k=size;k>0;k--)
    {
        for(i=1;i<k;i++)
        {
            if(num[i]<num[i+1])
            {
                a=num[i];
                num[i+1]=num[i];
                num[i]=a;
            }
        }
    }
    for(i=size;i>0;i--)
        printf("%d\t",num[i]);
}
