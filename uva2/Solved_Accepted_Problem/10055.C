/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

// Accepted
#include<stdio.h>
int main()
{
    double a,b;
    while(scanf("%lf%lf",&a,&b)==2)
    {
        if(a > b)
            printf("%.0lf\n",a-b);
        else
            printf("%.0lf\n",b-a);
    }
    return 0;
}
/*10055 - Hashmat the Brave Warrior*/

