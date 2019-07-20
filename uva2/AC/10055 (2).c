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
    long long int a,b,x;
    while((scanf("%lld%lld",&a,&b))==2)
    {
        if(a<b)
            {x=b-a;
            printf("%lld\n",x);
            }
        else
            {x=a-b;
        printf("%lld\n",x);}

    }
    return 0;
}
