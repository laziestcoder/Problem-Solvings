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
    int t,i,n,y,p,j;
    char a[105],b[10];
    cin >> t;
    for(i=1; i<= t ; i++)
    {
        cin >> n;
        for(j=1; j<=n; j++)
        {
            cin >> b;
            if(b[0]=='S')
            {
                cin>>b;
                cin>>y;
                a[j]=a[y];

            }
            else
                {
                    a[j]=b[0];

                }

        }
        p=0;
        for(j=1; j<= n; j++)
        {
            if(a[j]=='L')
                {
                    p--;

                }
            else if(a[j]=='R')
                {
                    p++;

                }
        }
        cout << p << "\n";

    }

    return 0;
}

