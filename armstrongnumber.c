#include<stdio.h>


int main ()
{
    long long int b,e,s,i,a[1]={0},sum=0;
    int c=0;
    printf("Starting Point S= ");
    scanf("%lld",&s);
    printf("Ending Point E= ");
    scanf("%lld",&e);
    c=0;
    for(b=s ; b<=e ; b++)
    {
        i=b;
        if(b==0 || b==1)
        {
            c++;
            printf("Armstrong Number %d: %lld\n",c,b);
        }

        else if( b>1 )
        {
            sum=0;

            do

            {
                a[1]=i%10;
                sum=sum+(a[1]*a[1]*a[1]);
                i=i/10;
            } while(i);

            if(b==sum)
            {
                c++;
                printf("Armstrong Number %d: %lld\n",c,b);
            }

        }

    }
    return 0;

}



