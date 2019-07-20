#include<cstdio.h>

int main ()
{
    long long int n,i,k,t,c,m,j;
    while(scanf("%lld%lld",&i,&j)!=EOF)
    {
        m=0;
        for(k=i; k<=j; k++)
        {
            c=0;
            n=1;
            while(n)
            {
                if(k=1)
                    n=0;
                else if(k%2!=0)
                        k=(k*3)+1;
                      else if(k%2==0)
                            k=k/2;
                c++;
            }
            if(c>m)
                m=c;
        }
        printf("%lld %lld %lld\n",i,j,m);
    }
    return 0;
}

