/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,c,b[10000],i,j,d,p=0;
    while(1)
    {
        scanf("%d%d",&a,&c);
        if(a==0 || c==0)
            return 0;
        for(i=0; i<c; i++)
        {
            scanf("%d",&b[i]);
        }
        p=0;
        for(j=0; j<c; j++)
        {
            if(j==0)
                p=a-b[j];
            else
            {
                d=b[j-1]-b[j];
                if(d>0)
                    p+=d;
            }
        }
        cout << p << endl;

    }

    return 0;
}
