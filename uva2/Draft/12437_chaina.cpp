    #include<bits/stdc++.h>
    # include <stdio.h>
    # include <string.h>
    # include <algorithm>
    # include <vector>

    using namespace std;

    const int MAXN=1e4+10;
    const int INF=1e7;

    vector <int> vec[MAXN];
    int vis[MAXN];
    int ans[MAXN],num,longest,ending;

    void dfs (int u,int fa,int deep)
    {
        num++;
        vis[u]=1;
        if(deep>longest)
        {
            longest=deep;
            ending=u;  /*** Record the longest chain end vertex ***/
        }
        for(int i=0;i<vec[u].size();i++)
        {
            int v=vec[u][i];
            if(v!=fa)
            {
                dfs(v,u,deep+1);
            }
        }
    }
    void solve (int k) /***Num records that can be reached from the b departure point number, longest record length of the path the
                                longest chain ***/
    {
        num=0;
        longest=0;
        dfs(k,-1,1);
        longest=0;
        num=0;
        dfs(ending,-1,1); /*** Twice dfs ensure that the chain is looking for the longest current
                            connected graph, the second time is to update the main longest, num is actually unchanged ***/
        for(int i=1;i<=longest;i++)
        {
            ans[i]=min(ans[i],i-1);
        }
        for(int i=longest+1;i<=num;i++)
        {
            ans[i]=min(ans[i],2*i-longest-1);
        }
    }
    int main ()
    {
        freopen("in.txt","r",stdin);
        int t,n,m,u,v,k,q;
        scanf("%d",&t);
        for(int ca=1;ca<=t;ca++)
        {
            scanf("%d%d",&n,&m);
            for(int i=1;i<=n;i++) vec[i].clear();
            for(int i=1;i<=m;i++)
            {
                scanf("%d%d",&u,&v);
                vec[u].push_back(v);
                vec[v].push_back(u);
            }
            memset(vis,0,sizeof(vis));
            for(int i=1;i<=MAXN;i++)
            {
                ans[i]=INF;
            }
            for(int i=1;i<=n;i++)
            {
                if(!vis[i])
                    solve(i); /*** Update the value is at least equivalent to the cost of each connected component in ***/
            }


            scanf("%d",&q);

            printf("Case %d:\n",ca);
            while(q--)
            {
                scanf("%d",&k);
                if(ans[k]==INF) printf("impossible\n");
                else printf("%d\n",ans[k]);
            }
        }
        return 0;
    }
