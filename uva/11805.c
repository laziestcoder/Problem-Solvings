/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
main ()
{
    int t,n,k,p,i,s;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&n,&k,&p);
        s=k+p;
       while(s>n)
       {
           s=s-n;
       }
            printf("Case %d: %d\n",i,s);

    }
    return 0;

}
