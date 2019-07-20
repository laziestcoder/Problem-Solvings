#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,l,p,m,x;

    for(i=1; i<=8; i++)
    {
        for(l=1; l<=8-i; l++)
        {
            printf("    ");
        }
        m=2*i-1;
        x=0;
        for(j=1; j<=m; j++)
        {
                if(j<=m/2)
                {
                    p=pow(2,x);
                    x++;
                    printf("%4d",p);
                }
                else
                {
                    p=pow(2,x);
                    x--;
                    printf("%4d",p);
                }
        }
        printf("\n");
    }
    return 0;
}
