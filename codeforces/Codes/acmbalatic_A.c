#include<stdio.h>

int main ()
{
    long long int a,b,i,j,d1,d2,d,x[100000];
    scanf("%lld%lld",&a,&b);
    for(i=0; a>0 , b>0; i++)
    {
        d1=a%10;
        a=a/10;
        d2=b%10;
        b=b/10;
        d=d1-d2;
        if(d<0)
         x[i]=(-1)*d;
        else
        x[i]=d;

    }
    for(j=i-1;j>=0;j--)
      {
          if(x[j]==0)
            continue;
            else
                break;
      }

    for(j=j;j>=0;j--)
        printf("%d",x[j]);

    printf("\n");
    return 0;
}

