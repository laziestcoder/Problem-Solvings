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
    int s,i,b,f,j;
    cin >> s;
    for(i=1; i<=s;i++)
    {
        f=0;
        for(j=1;j<=13;j++)
        {
            cin>> b;
            if(b==0)
                f=1;

        }
        if(f==1)
            cout << "Set #" << i <<": No\n";
        else
            cout << "Set #" << i <<": Yes\n";
    }

    return 0;
}

