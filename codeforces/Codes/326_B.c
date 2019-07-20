#include<stdio.h>
#include<math.h>
#define x 100000
int main ()
{
    long long i,num[x+5],n,p,d,j,k,m,end[x+5];
    int f,q;
    scanf("%lld",&n);
    f=0;
    q=0;
    for(i=2,j=1,k=1; i<=n ; i++)
    {
        if(n%i==0)
        {
            p=i*i;

            if(i==(p/i))
            {
                end[k]=p;
                num[j]=i;
                j++;
                k++;
                if(n%p==0)
            {
                f=1;

            }
            }
        }
    }

    for(k=j-1; k>=1; k--)
    {
        for(m=1; m<=j; m++)
        {
            if(num[k]%end[m]!=0)
            {
                d=num[k];
                q=1;
                k=1; m=j;
            }
        }

    }
    if(f==0)
        printf("%lld\n",n);
    else if(q==1)
        printf("%lld\n",d);



    return 0;
}
