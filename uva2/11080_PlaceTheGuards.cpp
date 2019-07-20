/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*	uva problem 11080 - Place the Guards using BFS  					*/
/************************************************************************/

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
   // freopen("11080in.cpp","r",stdin);
   // freopen("11080in2.cpp","r",stdin);
   // freopen("11080out.cpp","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int i,v,e;
        for(i=0; i<201; i++)
        {
            G[i].clear();
            color[i]=2;
        }
        cin>>v>>e;

        for(i=0; i<e; i++)
        {
            int j,k;
            cin>>j>>k;
            G[j].push_back(k);
            G[k].push_back(j);
        }
        bool impos;
        impos = false;
        int x = 0, ans = 0;
        for (i=0; i<v && !impos; i++)
        {
            if (color[i] == 2)
            {
                int x=bfs(i);
                if (x == -1)    impos=true;
                else    ans+=x;
            }
        }
        if(impos)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
