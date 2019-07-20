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
int main()
{
    int a,b,c1,c2,i,j;
    while(1)
    {
        cin>>a>>b;
        if(a==-1 && b==-1)
            break;
        c1=0;
        c2=0;
        for(i=a; i!=b; i++)
        {

            if(i==100 && b!=0)
                i=0;
            else if(i==100 && b==0)
            {
                break;
            }
            c1++;
        }

        for(i=a ; i!=b; i--)
        {
            c2++;
            if(i==0 && b!=99)
                i=100;
            else if(i==0 && b==99)
                break;

        }

        if(c1<=c2)
        cout<<c1<<endl;
        else
        cout<<c2<<endl;
    }
    return 0;
}

