//Output:  *
//         **
//         ***
//         ****
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,t,n;
    scanf("%d",&n);
        t=k=n;
    for(j=0;j<t;j++)
    {
        for(i=0;i<k-(n-1);i++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}


