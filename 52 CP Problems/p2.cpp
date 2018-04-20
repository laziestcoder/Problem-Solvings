/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<iostream>
#include<cstdio>

using namespace std;
int main ()
{
    int t,n,p=0,e=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        if(n>0)
            p++;
        else if(n<0)
            e++;
    }
    printf("%d %d\n",p,e);
    return 0;
}
