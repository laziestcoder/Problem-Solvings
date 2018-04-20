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
    int n,m,i,t,s,s2;
    scanf("%d%d%d",&t,&m,&n);
    for(i=1;i<=t;i++)
    {
        s2=n;
        s=m+n;
        n=s;
        m=s2;

        printf("%d\n",s);
    }
            return 0;

}
