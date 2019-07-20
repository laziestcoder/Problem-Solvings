//Output:     *
//           ***
//          *****
//         *******
#include<stdio.h>
int main()
{
    int i,j,n,space,star;
    scanf("%d",&n);
    space = n-1;
    star = 1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
            printf(" ");
        for(j=1;j<=star;j++)
            printf("*");
        space--;
        star = star+2;
        printf("\n");
    }
    return 0;
}
