#include<stdio.h>
#include<math.h>
int main ()
{
    long long int i,x=1,y=1,f;
    int n,t,j;
    while(scanf("%d%d",&n,&t)!=EOF)
    {
        f=0;
        for(j=1;j<=n;j++)
        {
            x=x*10;
            y=y*10;
        }
        x=x-1;
        y=y/10;

        //printf("%lld\n",x);
        //for(i=x; i>=y; --i)
        i=x;
        while(i>=y)
        {
            if( i%t == 0 )
                f=i;

            i--;
        }

        if(f>0)
        printf("%lld\n",f);
        else
            printf("-1\n");
    }
    return 0;
}
