#include<stdio.h>
int main()
{
    int a[10],i,item,count;

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    scanf("%d",&item);
    count=0;

    for(i=0;i<10;i++)
        if(a[i]==item)
        count++;
    printf("%d",count);

    return 0;
}
