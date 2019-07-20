/*
heap sort
*/

#include<stdio.h>

int n, tree[100], array[100];

void insert(int item)
{
    int ptr, par;
    n=n+1;
    ptr=n;
    while(ptr>1)
    {
        par=ptr/2;
        if(item<=tree[par])
        {
            tree[ptr]=item;
            break;
        }
        tree[ptr]=tree[par];
        ptr=par;
    }
    tree[ptr]=item;
}

int del(void)
{
    int ptr, left, right, item, last;
    item=tree[1];
    last=tree[n];
    n--;
    ptr=1;
    left=2;
    right=3;
    while(right<=n)
    {
        if(last>=tree[left]&&last>=tree[right])
        {
            tree[ptr]=last;
            break;
        }
        else if(tree[left]>=tree[right])
        {
            tree[ptr]=tree[left];
            ptr=left;
        }
        else
        {
            tree[ptr]=tree[right];
            ptr=right;
        }
        left=ptr*2;
        right=ptr*2+1;
    }
    if(left==n&&tree[left]>last)
    {
        tree[ptr]=tree[left];
        ptr=left;
    }
    tree[ptr]=last;
    return item;
}

void reverse(int n)
{
    int r, s, swap;
    r=1;
    s=n;
    while(s>r)
    {
        swap=array[r];
        array[r]=array[s];
        array[s]=swap;
        r++;
        s--;
    }
}

int main()
{
    int i, n, x;
    printf("how many items : ");
    scanf("%d",&n);
    printf("input array : \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
        insert(array[i]);
    }
    for(i=1;i<=n;i++)
    {
        x=del();
        array[i]=x;
    }
    reverse(n);
    printf("after sorting : \n");
    for(i=1;i<=n;i++)
        printf("%d ",array[i]);
    printf("\n");
    return 0;
}
