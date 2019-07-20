//Output: 111
//        22
//        3

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    k=n;
    for(j=1;j<=n;j++)
    {
        for(i=0;i<k;i++)
        {
            printf("%d",j);
        }
        k--;
        printf("\n");
    }
    printf("\n\n");
    return 0;
}


