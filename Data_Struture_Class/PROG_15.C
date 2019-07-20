// Insertion Sort
#include<stdio.h>

int main()
{
    int a[100],n,i,k,ptr,temp;
    a[0] = -99;
    printf("how many element : ");
    scanf("%d",&n);
    printf("input array : \n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(k=2;k<=n;k++)
    {
        temp = a[k];
        ptr = k - 1;
        while(temp<a[ptr])
        {
            a[ptr+1] = a[ptr];
            ptr = ptr - 1;
        }
        a[ptr+1] = temp;
    }
    printf("After sorting: ");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);

    return 0;
}
