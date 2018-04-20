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
#include<string>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main ()
{
    int t,a[10000],s,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            s=s+a[i];
        }
        printf("%.2lf\n",s*1.0/n);

    }
    return 0;
}

