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
    int y;
    while(scanf("%d",&y)==1)
    {
        if(y%4==0 && y%100!=0 || y%400==0)
            printf("This is a leap year\n");
        else
            printf("This is an ordinary year\n");
    }
}
