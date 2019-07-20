/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
int main()
{
    long long a[100],i,r,j;
    long long n;
    while(1)
    {
        scanf("%lld",&n);
        if(n<0)
            break;
            else if (n==0)
                printf("0\n");
        else
        {
            for(i=0;n!=0;i++)
            {
                a[i]=n%3;
                n/=3;
            }
            for(j=i-1;j>=0;j--)
                printf("%lld",a[j]);
            printf("\n");
        }
    }
    return 0;
}
