/*
selection sort
*/

#include<stdio.h>

#define MAX 100
int a[MAX+1], n, loc;

void min(int k)
{
    int j, min;
    min=a[k];
    loc=k;
    for(j=k+1;j<=n;j++)
        if(a[j]<min)
        {
            min=a[j];
            loc=j;
        }
}

int main()
{
    int k, swap;
    printf("how many elements : ");
    scanf("%d",&n);
    printf("input array : \n");
    for(k=1;k<=n;k++)
        scanf("%d",&a[k]);
    for(k=1;k<n;k++)
    {
        min(k);
        swap=a[k];
        a[k]=a[loc];
        a[loc]=swap;
    }
    printf("after sorting : \n");
    for(k=1;k<=n;k++)
        printf("%d ",a[k]);
    printf("\n");
    return 0;
}
