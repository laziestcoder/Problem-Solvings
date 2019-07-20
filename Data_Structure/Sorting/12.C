/*
merge sort
*/

#include<stdio.h>
#define MAX 100

void merge(int *a, int low, int mid, int high)
{
    int a1[MAX+1], a2[MAX+1], a3[MAX+1], i, x, y, ptr1, ptr2, ptr3;
    x=0;
    for(i=low;i<=mid;i++)
        a1[++x]=a[i];
    y=0;
    for(i=mid+1;i<=high;i++)
        a2[++y]=a[i];
    ptr1=ptr2=ptr3=1;
    while(ptr1<=x&&ptr2<=y)
    {
        if(a1[ptr1]<a2[ptr2])
        {
            a3[ptr3]=a1[ptr1];
            ptr3++;
            ptr1++;
        }
        else
        {
            a3[ptr3]=a2[ptr2];
            ptr2++;
            ptr3++;
        }
    }
    if(ptr1>x)
    {
        for(i=ptr2;i<=y;i++)
        {
            a3[ptr3]=a2[i];
            ptr3++;
        }
    }
    else
    {
        for(i=ptr1;i<=x;i++)
        {
            a3[ptr3]=a1[i];
            ptr3++;
        }
    }
    ptr3=0;
    for(i=low;i<=high;i++)
        a[i]=a3[++ptr3];
}

void merge_sort(int *a, int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main()
{
    int a[MAX+1], n, i;
    printf("how many element : ");
    scanf("%d",&n);
    printf("input array : \n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    merge_sort(a,1,n);
    printf("after sorting : \n");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
