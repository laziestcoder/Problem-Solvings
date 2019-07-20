#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("*");
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
            printf(" ");
        printf("*\n");
    }
    return 0;
}
