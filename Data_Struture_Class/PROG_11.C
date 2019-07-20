// Binary Search, Algorithm: 4.6, Page: 79
#include<stdio.h>
int main()
{
    int data[14],i,lb,ub,item,loc,beg,mid,end;
    for(i=1;i<=13;i++)
    {
        scanf("%d",&data[i]);
    }
    printf("Enter Item to Find : ");
    scanf("%d",&item);
    lb=1;
    ub=13;
    beg=lb;
    end=ub;
    mid=(beg+end)/2;

    while(beg<=end&&data[mid]!=item)
    {
        if(item<data[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(beg+end)/2;
    }

    if(data[mid]==item)
        loc=mid;
    else
        loc=0;
    if(loc==0)
        printf("Not Found");
    else
        printf("Found at : %d",loc);
    return 0;
}
