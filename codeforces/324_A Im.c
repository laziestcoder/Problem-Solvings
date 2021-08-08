#include<stdio.h>
#include<math.h>
int main ()
{
    long long int i,x=0,y=0,f;
    int n,t;
    while(scanf("%d%d",&n,&t)!=EOF)
    {
        f=0;
        x=pow(10,(n-1))+1;
        y=pow(10,n)-1;


        //printf("%lld %lld\n",x,y);

        for(i=x; i<=y; i++)
        {
            if( i%t == 0)

            {
                f=i;
                break;
            }

        }

        if(f>0)
            printf("%lld\n",f);
        else
            printf("-1\n");
    }
    return 0;
}
