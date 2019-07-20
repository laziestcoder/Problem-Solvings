// Largest Element in Array
#include<stdio.h>
int main()
{
    int a[10],i,large,loc;

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    large=a[0];
    loc=0;

    for(i=1;i<10;i++)
        if(a[i]>large)
        {
            large=a[i];
            loc=i;
        }
    printf("largest: %d",large);
    printf("\nlocation: %d",loc);

    return 0;
}

