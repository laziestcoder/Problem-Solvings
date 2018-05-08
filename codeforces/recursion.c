/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
int recursion(int a)
{
    int n;
    n=a;
    if(a>0)
    {
        printf("%d\n",n);
        n=recursion(a-1);
    }

}
int main()
{
    int n,x;
    scanf("%d",&n);
    x=recursion(n);
}
