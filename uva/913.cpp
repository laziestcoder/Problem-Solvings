/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
int main ()
{
    long long int x,n,s,c,i,j,t,k;
    while(scanf("%lld",&n)!=EOF)
    {
        for(i=1, k=1; i<=n;  i=i+2, k=j)
        {


            for(j=k,c=1; c<=i; c++, j=j+2 )
            {

            }

        }
        s=0;
        x=0;
        t=0;
        for(x=j-2, t=1; t<=3; t++, x=x-2 )
        {
            s=s+x;
        }
        if(s<1)
            printf("1\n");
            else
                printf("%lld\n",s);
    }

    return 0;
}
