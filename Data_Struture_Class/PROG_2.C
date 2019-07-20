//Output: ****
//        ***
//        **
//        *
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    k=n;
    for(j=0;j<n;j++)
    {
        for(i=0;i<k;i++)
        {
            printf("*");
        }
        k--;
        printf("\n");
    }
    printf("\n\n");
    return 0;
}


