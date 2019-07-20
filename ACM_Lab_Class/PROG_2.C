#include<stdio.h>
int main()
{
    int a[1000][1000],i,j,r,rc,rs;
    while(scanf("%d",&rc)==1)
    {
        if(r==0)
            break;
        for(i=0;i<rc;i++)
        {
            rs = 0;
            for(j=0;j<i;j++)
            {
                scanf("%d",&a[i][j]);//Give Sample input 3 4 5 6 8 9
                rs+=a[i][j];
            }
        }
    }
    printf("%d",rs);
    return 0;
}
