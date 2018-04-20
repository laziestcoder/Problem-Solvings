/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
int p;
int grp(int m, int n)
{
       p=n+m;
       return p;
}
int main()
{
       int n,m;
       scanf("%d %d",&n,&m);
       grp(n,m);
       printf("%d",p);
       return 0;
}
