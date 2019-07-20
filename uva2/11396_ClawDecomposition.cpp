#include <bits/stdc++.h>
using namespace std;

#define SZ 200001
vector <int> G[SZ];

int color[SZ];

int bfs(int s )
{
    queue <int> q;
    q.push(s);
    color[s] = 1;
    int total = 0, black = 0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        total++;
        if(color[u]==1) black++;
        for(int i = 0; i<G[u].size(); i++)
        {
            int v = G[u][i];
            if (color[v]==2)
            {
                color[v]=1-color[u];
                q.push(v);
            }
            else if (color[v] == color[u])  return -1; //means conflict and it's imposible
        }
    }
    if (total==1)
        return 1;//if it's a isolated vertex we should guard this by one person
    return min(black,total-black);//choose least color used
}

int main()
{
    freopen("in.cpp","r",stdin);
    freopen("out.cpp","w",stdout);
     while(1)
    {
        int n,k,i;
        //getchar();
        cin>>n;

        if(n==0)
            return 0;
         for(i=0; i<401; i++)
        {
            G[i].clear();
            color[i]=2;
        }

         while(1)
        {
            int a,b;
            cin>>a>>b;
            if(a==0 && b==0)
                break;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        bool impos;
        impos = false;
        int x = 0, ans = 0;
        for (i=0; i<n && !impos; i++)
        {
            if (color[i] == 2)
            {
                int x=bfs(i);
                if (x == -1)    {impos=true; break;}
                else    ans+=x;
            }
        }
        if(!impos)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
