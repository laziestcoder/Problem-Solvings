#include<bits/stdc++.h>
using namespace std;
/*** int G[10005][10005],visited[10005]= {0},n,k,c,d; ***/

/***int DFS(int i)
{
    int p=i;
    if(c>=k)
        return d;
    int j;
    visited[p]=1;

    for(j=0; j<=n; j++)
    {

        if( !visited[j] && G[p][j]==1 && i!=j)
        {
            c++;
            d++;
            DFS(j);
            //d++;
        }
        if(c>=k)
            return d;
    }
}***/
int vis[10005],ad[10005][10005],is=0,c=0,k,lvl[10005];

void bfs(int s)
{
    int i;
    queue<int> Q;
    Q.push(s);
    vis[s]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(i=0; i<sizeof(ad[u]); i++)
        {
            if(vis[ad[u][i]]==0)
            {
                int v=ad[u][i];
                vis[v]=1;
                Q.push(v);
                lvl[u]=lvl[v]+1;
                c++;
                if(c>=k)
                  break;
            }
        }
        if(c>=k)
            break;
    }
}


int main ()
{
    freopen("in.txt","r",stdin);
    int t,n,m,u,v,q,cas=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int j,l,i;
        for(i=1; i<=m; i++)
        {
            cin>>u>>v;
            ad[u][v]=1;
            ad[v][u]=1;
        }

        cin>>q;
        printf("Case %d:\n",++cas);
        for(i=1; i<=q; i++)
        {
            cin>>k;
            is=0; c=0;
            if(k>n)
                cout<<"impossible\n";
            else if(k==0)
                cout<<0<<endl;
            else
            {
                bfs(u);
                cout<<c<<endl;

            }

        }
    }
    return 0;
}
