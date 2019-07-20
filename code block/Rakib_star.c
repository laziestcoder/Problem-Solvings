#include<stdio.h>
int main()
{
    int i,n,j,k,l,m,p,s;
    printf("How many rows? : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
      for(k=1; k<=n-i; k++)
      {
             printf("    ");
      }
            l=1;
        for(j=1; j<=i ;j++)
        {
            printf("%4d",l);
            l*=2;
        }
            p=l/4;
       for(m=i-1;p>=1;m--)
        {
            printf("%4d",p);
            p/=2;
        }
        printf("\n");
    }
}
