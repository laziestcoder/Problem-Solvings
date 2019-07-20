/*
merging
*/

#include<stdio.h>
#define MAX 100

int main()
{
    int a[MAX+1], b[MAX+1], c[MAX+MAX+1], r, s, na, nb, ptr, i;
    printf("how many elements in the first array : ");
    scanf("%d",&r);
    printf("input array : \n");
    for(i=1;i<=r;i++)
        scanf("%d",&a[i]);
    printf("how many elements in the second array : ");
    scanf("%d",&s);
    printf("input array : \n");
    for(i=1;i<=s;i++)
        scanf("%d",&b[i]);
    na=1;
    nb=1;
    ptr=1;
    while(na<=r&&nb<=s)
    {
        if(a[na]<b[nb])
        {
            c[ptr]=a[na];
            na++;
            ptr++;
        }
        else
        {
            c[ptr]=b[nb];
            nb++;
            ptr++;
        }
    }
    if(na>r)
    {
        for(i=nb;i<=s;i++)
        {
            c[ptr]=b[i];
            ptr++;
        }
    }
    else
    {
        for(i=na;i<=r;i++)
        {
            c[ptr]=a[i];
            ptr++;
        }
    }
    printf("after merging : \n");
    for(i=1;i<=r+s;i++)
        printf("%d ",c[i]);
    printf("\n");
    return 0;
}
