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
    int k,w,f,s,i;
    long long int n;
    while((scanf("%d%d%d",&k,&n,&w)==3))
    {
        s=0;
        for(i=1;i<=w;i++)
        {
            s=s+(k*i);
        }
        f=s-n;
        if(f>0)
            printf("%d",f);
        else
            printf("0");
    }
    return 0;
}
