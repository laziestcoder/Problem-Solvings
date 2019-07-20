/*     *
       *
    ****
*/
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n-2;i++)
    {
        printf("   ");
        printf("*\n");
    }
    for(i=0;i<n;i++)
        printf("*");
    return 0;
}
