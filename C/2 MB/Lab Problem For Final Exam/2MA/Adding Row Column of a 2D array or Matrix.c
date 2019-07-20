#include<stdio.h>
int main()
{
    int a[2][3],r[2]={0},c[3]={0},i,j;
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);//Give Sample input 3 4 5 6 8 9
            r[i]+=a[i][j];
            c[j]+=a[i][j];
        }

    for(i=0;i<2;i++)
        printf("Row Sum: %d\n",r[i]);
    for(j=0;j<3;j++)
        printf("Column Sum: %d ",c[j]);
    return 0;
}
