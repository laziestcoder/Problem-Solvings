/*Write a program to display
1
2 2
3 3 3
….
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("How many lines : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",i);
        printf("\n");
    }
    return 0;
}
