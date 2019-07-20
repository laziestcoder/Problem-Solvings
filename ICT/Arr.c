#include<stdio.h>
int main()
{
    int n,i,x[100];
    printf("Input how many numbers????\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    for(i=0;i<n;i++)
        printf("%d\t",x[i]);
    return 0;
}
