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
int a1[1000][1000];
int main()
{
    int r,c,i,j,k=1,line=0;
    while(1)
    {
        cin>>r>>c;
        if(r==0 && c==0)
            break;
        for(i=1; i<=r; i++)
            for(j=1; j<=c; j++)
                cin>>a[i][j];
        for(i=1; i<=r; i++)
            for(j=1; j<=c; j++)
                a1[i][j]=0;

        for(i=1; i<=r; i++)
            for(j=1; j<=c; j++)
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
        cout<<"Field #"<<k++<<":"<<endl;
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                if(a[i][j]=='*')
                    cout<<"*";
                else
                    cout<<a1[i][j];
            }

            cout<<endl;
            line++;
        }
    }
    return 0;
}
