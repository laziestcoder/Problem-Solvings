/**
    Team Name   : IIUC Debug & Conquer
    Varsity     : International Islamic University Chittagong
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t,i,n,m,f,mx;
    scanf("%d",&t);
    for(i=1; i<=t ;i++)
    {
        mx=-1;
        f=0;
        scanf("%d",&n);
        for(int j=0; j<n ;j++)
        {
            scanf("%d",&m);
            if(mx<m)
                mx = m;
            else if (mx == m)
                f=1;
        }
        if(f == 0)
         printf("Case %d: Happy Unhappy\n",i);
        else
            printf("Case %d: Unhappy Unhappy\n",i);
    }
    return 0;
}
