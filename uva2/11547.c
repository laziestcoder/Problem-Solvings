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
    int b,t,a,i,n;
    long long r;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        r=(((n*567)/9+7492)*235)/47-498;
        a=r/10;
        b=a%10;
        if(b<0)
            b=b*(-1);
        printf("%d\n",b);
    }
    return 0;
}
