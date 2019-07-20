#include<stdio.h>
int main()
{
    long long int a,b,n,i,c,s,tmp,k;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        s=0;
        if(a>b)
        {
            tmp=b;
            b=a;
            a=tmp;
        }
        for(i=a; i<=b; i++)
        {
            c=0;
            n=i;
            while(n > 1)
            {
                if(n % 2==0)
                    n= n/2;
                else if(n %2 !=0)
                    n = (3*n)+1;
                    else
                        n=0;
                c++;
            }
            if(c>s)
            {
                s=c;
            }
        }
        printf("%lld %lld %lld\n",a,b,s);;
    }
    return 0;
}
