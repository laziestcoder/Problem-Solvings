#include<stdio.h>
int main()
{
    int a[5],i,key,loc=-1,occ=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);//Array Input
    }
    printf("Enter a number to find the Location from array\n");
    scanf("%d",&key);//Which number to find

    for(i=0;i<5;i++)
        if(a[i]==key)
        {
            loc=i;
            occ++;//How many times the number is present
        }
    if(loc==-1)
        printf("Not found");
    else
        printf("Location: %d Occurrence: %d",loc,occ);
    return 0;
}
