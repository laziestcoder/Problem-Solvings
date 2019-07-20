#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,j,cn=0;
    scanf("%d",&n);
    char c[1001][5];
    for(i=0; i<n ; i++)
    {

            scanf("%s",&c[i]);

        if(c[i][0]=='O' && c[i][1]=='O'  && cn==0 )
        {
            cn=1;
            c[i][0]='+';
            c[i][1]='+';
        }
        else if(c[i][3]=='O' && c[i][4]=='O' && cn==0)
        {
            cn=1;
            c[i][3]='+';
            c[i][4]='+';
        }
    }
    if(cn==1)
    {
        cout<<"YES\n";
        for(i=0; i<n; i++)
        {
            for(j=0; j<5 ; j++)
            {
                cout<<c[i][j];
            }
            cout<<endl;
        }
    }
    else
        cout<<"NO\n";
    return 0;
}
