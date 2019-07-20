/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

/*
factorial recursive
*/

#include<stdio.h>

double fact(double n)
{
    if(n-1<.000001)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    double n;
    printf("inpt a number : ");
    scanf("%lf",&n);
    printf("factorial(%.0lf) : %.0lf",n, fact(n));
    return 0;
}
