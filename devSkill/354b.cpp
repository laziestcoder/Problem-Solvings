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
    long long int n,t,i,j,c=0;
    double g[102][102];
    cin>>n>>t;
    g[0][0]=t*1.0;
    c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if( g[i][j] >= 1)
               {
                   c++;
                   g[i+1][j]   +=  ((g[i][j]-1.0)/2.0);
                   g[i+1][j+1] +=  ((g[i][j]-1.0)/2.0);
               }
        }
    }
    printf("%d\n",c);
    return 0;
}
