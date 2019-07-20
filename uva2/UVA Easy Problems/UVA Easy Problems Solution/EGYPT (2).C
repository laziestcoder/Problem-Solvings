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
    int a, b, c;
    while(1)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==0&&b==0&&c==0)
            break;
        if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
