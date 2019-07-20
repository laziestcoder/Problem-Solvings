//Output: 1
//        23
//        456
#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
            printf("%d",k);
            printf("\n");
            k++;
    }
    return 0;
}
