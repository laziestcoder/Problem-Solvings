#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n;
    scanf("%d",&n);
    char star[n][2*n];
    memset(star,' ',sizeof(star));
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            for(j=1; j<2*n; j++)
            {
                star[i][j]='*';
            }
        }
        else
        {
            star[i][i]='*';
            star[i][n-i]='*';
        }

    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<2*n; j++)
        {
            cout<<star[i][j];
        }
        cout<<endl;
    }
    return 0;

}
