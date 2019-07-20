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
    int a,b,c1,c2,x;
    while(1)
    {
        cin >>a >>b;
        if(a==-1 && b==-1)
            return 0;
        x=a;
        c1=0;
        while(1)
        {
            if(x==b)
                break;
            if(x==99)
            {
                x=0;
                c1++;
            }
            else
            {
                x=x+1;
                c1++;
            }

        }
        x=a;
        c2=0;
        while(1)
        {
            if(x==b)
                break;
            if(x==0)
            {
                x=99;
                c2++;
            }
            else
            {
                x=x-1;
                c2++;
            }

        }
        if(c1>c2)
            cout << c2 << endl;
        else
            cout << c1 << endl;
    }
    return 0;
}
