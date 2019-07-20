/*  ****
       *
       *
       *
*/
#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("*");
    printf("\n");
    for(j=0;j<n-1;j++)
    {
        for(k=0;k<n-1;k++)
            printf(" ");
        printf("*\n");
    }
    return 0;
}
