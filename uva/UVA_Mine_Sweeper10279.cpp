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
char a[1000][1000];
char b[1000][1000];
int a1[1000][1000];
int main()
{
    int t,n,i,j,line=0,sline=0;
    cin>>t;
    while(t--)
    {
        cout<<endl;

        cin>>n;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                cin>>a[i][j];

        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                cin>>b[i][j];

        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                a1[i][j]=0;

        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
            {
                if(a[i][j]=='*')
                {
                    a1[i-1][j-1]++;
                    a1[i-1][j]++;
                    a1[i-1][j+1]++;
                    a1[i][j-1]++;
                    a1[i][j+1]++;
                    a1[i+1][j-1]++;
                    a1[i+1][j]++;
                    a1[i+1][j+1]++;
                }
            }

        if(line>0)
            cout<<endl;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(b[i][j]=='x')
                    cout<<a1[i][j];
                else if(a[i][j]=='*')
                        cout<<"*";
                else
                    cout<<".";
            }

            cout<<endl;
            line++;
        }
    }
    return 0;
}
