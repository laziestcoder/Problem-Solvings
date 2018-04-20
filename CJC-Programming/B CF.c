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
    int n,i,j;
    scanf("%d",&n);
    int d[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&d[i]);
    }
    for(i=0,j=(n-1);j>=(n/2),i<=(n/2);j--,i++)
    {
    if(d[i]==d[j])
        printf("%d",d[i]);
    }
    return 0;
}
