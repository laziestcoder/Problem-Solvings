#include<bits/stdc++.h>
using namespace std;
int main ()
{
   //freopen("in.txt","r",stdin);
 //  freopen("out.txt", "w", stdout);
    int t,i=0;
    cin>>t;
    while(t--)
    {
        int m=0,T=1,j=0,k=0;
        string a, b,c,d;
        cin>>m;
        for(j=0; j<m; j++)
            {
                cin>>a>>b;

                if(a==b)
                    T=0;
                d=b;
                c=a;
            }

        if(T)
            printf("Case %d: Yes\n",++i);
        else
            printf("Case %d: No\n",++i);
    }
    return 0;
}
