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
    int a,m,n,k;
    while(scanf("%d%d",&n,&k)==2)
    {
        m=n;
        while(m>=k)
        {
                n+=m/k;
                m=m/k+(m%k);
        }
        printf("%d\n",n);
    }
    return 0;
}
