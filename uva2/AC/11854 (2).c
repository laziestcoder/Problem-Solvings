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
    long int a,b,c,x,y,z;

    while(scanf("%ld%ld%ld",&a,&b,&c)==3 && a!=0 && b!=0 && c!=0 )
    {
        x=c*c;
        y=a*a;
        z=b*b;
        if(x==y+z || y==z+x || z==x+y)
        printf("right\n");
        else
        printf("wrong\n");

    }
    return 0;
}
