#include<stdio.h>

int main()
{
    int m,n,i;
    printf("Input m : ");
    scanf("%d",&m);
    printf("Input n : ");
    scanf("%d",&n);
    printf("Displaying m to n : ");
    for(i=m;i<=n;i++)
        printf("%d ",i);
    return 0;
}
