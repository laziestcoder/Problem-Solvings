/*
quick sort
*/

#include<stdio.h>
#define MAX 100
int a[MAX+1], n, loc, beg, end;

void quick(void)
{
    int left=beg, right=end, temp;
    loc=beg;
    while(1)
    {
        while(a[loc]<=a[right]&&right!=loc)
            right--;
        if(right==loc)
            break;
        temp=a[right];
        a[right]=a[loc];
        a[loc]=temp;
        loc=right;
        while(a[left]<=a[loc]&&left!=loc)
            left++;
        if(left==loc)
            break;
        temp=a[left];
        a[left]=a[loc];
        a[loc]=temp;
        loc=left;
    }
}

int main()
{
    int i, lower[MAX+1], upper[MAX+1], top=0;
    printf("how many element : ");
    scanf("%d",&n);
    printf("input array : \n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    if(n>1)
    {
        top=1;
        lower[top]=1;
        upper[top]=n;
    }
    while(top)
    {
        beg=lower[top];
        end=upper[top];
        top--;
        quick();
        if(beg<loc-1)
        {
            top++;
            lower[top]=beg;
            upper[top]=loc-1;
        }
        if(loc+1<end)
        {
            top++;
            lower[top]=loc+1;
            upper[top]=end;
        }
    }
    printf("after sorting:\n");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
