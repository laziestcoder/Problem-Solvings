#include<stdio.h>
#include<math.h>

int main ()
{
    long long int sum,t,k[105]={0},x=0,p[105]={0},n,max,j,i,t1,t2;
    scanf("%lld",&t);

    for(i=1; i<=t; i++)
    {
        sum=0;
        max=0;
        x=0;
        scanf("%lld",&n);

        for(j=1; j<=n; j++)
        {
            scanf("%lld%lld",&k[j],&p[j]);


        }

        for(j=1; j<n; j++)
        {
            if(p[j]<p[j+1])
                {
                    t1=p[j+1];
                    p[j+1]=p[j];
                    p[j]=t1;

                    t2=k[j+1];
                    k[j+1]=k[j];
                    k[j]=t2;
                }
            else if(p[j]==p[j+1])
                {
                    if(k[j]<k[j+1])
                    {
                            t2=k[j];
                            k[j]=k[j+1];
                            k[j+1]=t2;
                    }
                }

        }
        for(j=1; j<=n ; j++)
            sum+=k[j];
        for(j=1; j<= n; j++)
        {
            x=sum*p[j];
            if(x>=max)
            {
                max=x;
            }
            sum=sum-k[j];
        }
        printf("Case %lld: %lld\n",i,max);
    }


    return 0;
}

