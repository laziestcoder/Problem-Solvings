#include<stdio.h>

int main ()
{
    int n;
    long long int q,i,k,t,c,m,j,p,r;
    while(scanf("%lld%lld",&r,&q)!=EOF)
    {
        if(r>q)
        {
            i=q;
            j=r;
        }
        else
        {
            i=r;
            j=q;
        }
        m=0;
        for(p=i; p<=j; p++)
        {
            k=p;
            c=0;
            n=2;
            while(n>1)
            {
                if(k==1 || k==0)
                    n=0;
                else if(k>1 && k%2!=0)
                    k=(k*3)+1;
                else if(k>1 && k%2==0)
                    k=k/2;
                c++;
            }
            if(c>=m)
                m=c;
        }
        printf("%lld %lld %lld\n",r,q,m);
    }
    return 0;
}

