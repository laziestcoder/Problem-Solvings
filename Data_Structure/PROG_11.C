//Output: ****
//        *  *
//        *  *
//        ****
#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||j==n)
                printf("*");
            else if(j!=1&&j!=n && (i==1||i==n))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
