/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/


#include<stdio.h>
long long cycle(long long n)
{
    long long x=1;
    if(n%2==0)
        n=n/2;
    else
        n=3*n+1;
    while(n!=1)
    {
         if(n%2==0)
        n=n/2;
    else
        n=3*n+1;
          x++;
    }

    return(x);
}
int main()
{
    long long n,i,j,a,b,c,max;

    while(scanf("%lld%lld",&i,&j)==2)
    {
        if(i==0 && j==0)
            break;
        if(i<=j)
        {
            a=i;
            b=j;
            max=0;
            for(a; a<=b; a++)
            {
                c=cycle(a);
                if(c>max)
                {
                    max=c;
                    n=a;
                }
            }
            printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",i,j,n,max);
        }
        else
        {
            b=i;
            a=j;
            max=0;
            for(b; b>=a; b--)
            {
                c=cycle(b);
                if(c>max)
                {
                    max=c;
                    n=b;
                        printf("%d %d\n",n,max);
                }
            }
            printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",i,j,n,max);
        }
    }
    return 0;
}

