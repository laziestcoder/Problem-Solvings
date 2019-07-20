#include<stdio.h>
int main()
{
    int a,even;
    scanf("%d",&a);

    even=a%2;
    if(even==0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
