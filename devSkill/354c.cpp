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
    string s;
    int n,t,mx=0,a=0,b=0;
    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        scanf("%c",&s[i]);
        if(s[i]=='a')
            a++;
        else if(s[i]=='b')
            b++;
    }
    int a1=0;
    if(a>b)
    {

        for(int i=0; i<n; i++)
        {
            if(s[i]=='b')
            {
                if(a>0 && b<t)
                {
                    b++;
                    a++;
                }
                else if(b>=t)
                {
                    mx=max(mx,a);
                    a=0;
                    b=0;
                }

            }
            else
                a++;
            mx=max(a,mx);
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(s[i]=='a')
            {
                if(b>0 && a<t)
                {
                    b++;
                    a++;
                }
                else if(a>=t)
                {
                    mx=max(mx,b);
                    a=0;
                    b=0;
                }

            }
            else
                b++;
            mx=max(b,mx);
        }
    }


    cout<<mx-t<<endl;
    return 0;
}
