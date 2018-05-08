
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t ; i++)
    {
        int n,j,mark[102]= {0},mxx=0,mx=0,no=1;
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            int a;
            scanf("%d",&a);
            mark[a]+=1;
            if(mxx<a)
                mxx=a;
            if( mx < mark[a])
            {
                mx=mark[a];
                no=a;
            }
            else if(mx == mark[a])
            {
                if(a>no)
                    no=a;
            }
        }
        printf("Case %d: %d %d\n",i,no,mx);

    }
    return 0;
}
