//Output:        *
//               *
//               *
//            ****
#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-1;j++)
            printf(" ");
            printf("*");
            printf("\n");
    }
    for(j=1;j<=n;j++)
        printf("*");
    return 0;
}
