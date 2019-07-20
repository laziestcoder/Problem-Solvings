#include<stdio.h>
int main()
{
    int a[10],i,item,loc;

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    scanf("%d",&item);
    loc=-1;
    for(i=0;i<10;i++)
        if(a[i]==item)
            loc=i;
    if(loc==-1)
        printf("Not found");
    else
        printf("Found at %d",loc);

    return 0;
}
