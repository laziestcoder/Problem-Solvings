/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

// 12372 	Packing for Holiday
// Accepted
#include<stdio.h>
int main()
{
    int tc,k,l,w,h;
    scanf("%d",&tc);
    for(k=1;k<=tc;k++)
    {
        scanf("%d%d%d",&l,&w,&h);
        if(l<=20&&w<=20&&h<=20)
            printf("Case %d: good\n",k);
        else
            printf("Case %d: bad\n",k);
    }

    return 0;
}
