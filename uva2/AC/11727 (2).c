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
    int i,t,a,b,c;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a>b && a<c) || (a<b && a>c))
        {
            printf("Case %d: %d",i,a);
        }
        else if((b>a && b<c) || (b<a && b>c))
        {
            printf("Case %ld: %d",i,b);
        }
        else if ((c>a && c<b) || (c<a && c>b))
        {
            printf("Case %d: %d",i,c);
        }

    printf("\n");
    }
    return 0;
}
