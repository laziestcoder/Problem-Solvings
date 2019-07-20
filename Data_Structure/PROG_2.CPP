/*Output:  *
           *
           *
           ****
*/
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        printf("*");
        printf("\n");
    }
    for(i=0;i<n;i++)
        printf("*");
    return 0;
}
