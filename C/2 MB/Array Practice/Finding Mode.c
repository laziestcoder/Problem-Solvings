#include<stdio.h>

int main()
{
    int i,a[]={10,10,9};
    int count[11];

    for(i=0;i<11;i++)
        count[i]=0;

    for(i=0;i<3;i++)
        count[a[i]]++;
    for(i=9;i<=10;i++)
        printf("Number: %d Count: %d\n", i,count[i]);

    return 0;
}
