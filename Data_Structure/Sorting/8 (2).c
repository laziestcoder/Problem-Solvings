/*
insertion sort
*/

#include<stdio.h>
#define MAX 100

int main()
{
    int a[MAX+1], n, i, k, ptr, temp;
    a[0]=-1;
    printf("how many element : ");
    scanf("%d",&n);
    printf("input array : \n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(k=2;k<=n;k++)
    {
        temp=a[k];
        ptr=k-1;
        while(a[ptr]>temp)
        {
            a[ptr+1]=a[ptr];
            ptr--;
        }
        a[ptr+1]=temp;
    }
    printf("after sorting : \n");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
