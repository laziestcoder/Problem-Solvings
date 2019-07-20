/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*	uva problem 10004 - BICOLORING using BFS							*/
/************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define SZ 201
vector <int> G[SZ];

bool visited[201];
int color[201];
bool flag;
int q[201], qi=0, qv=-1;

void bfs( vector <int> a[], int s )
{
    //cout<<"BFS"<<endl;
    //cout<<visited[s]<<endl;
    if(!visited[s])
    {
        //cout<<"visited "<<visited[s]<<endl;
        visited[s] = true;
        //cout<<"s = "<<s<<endl;
        for(int i = 0; i<a[s].size(); i++)
        {
            //cout<<"color "<<color[a[s][i]]<<endl;
            if(color[a[s][i]]==-1)
            {
                if(color[s]==0){
                color[a[s][i]] = 1;
                }
                else{
                color[a[s][i]] = 0;
                }
                q[qi]=a[s][i];
                //cout<<"q["<<qi<<"] = "<<q[qi]<<" a["<<s<<"]["<<i<<"] = "<<a[s][i]<<endl;
                qi++;

            }
            else if(color[a[s][i]]==color[s]){
                flag = true;
                return;

            }
        }
    }
    else{
        flag = true;
        return;
    }
    //cout<<"flag = "<<flag<<endl;
    if(qv>qi-2)
    {
        return;
    }
    qv++;
    // cout<<"q["<<qv<<"] = "<<q[qv]<<endl;
    bfs(a,q[qv]);
}

int main()
{
    // freopen("10004in2.cpp","r",stdin);
   // freopen("10004in.cpp","r",stdin);
   // freopen("10004out.cpp","w",stdout);
   // freopen("bfsTest.cpp","r",stdin);
    while(1)
    {
        int n,k,u;
        //getchar();
        cin>>n;

        if(n==0)
            return 0;
        cin>>k;
        for(u=0; u<=n; u++)
        {
            //cout<<"u = "<<u<<" ";
            G[u].clear();
            visited[u]=false;
            color[u]=-1;
            //cout<<visited[u]<<endl;
        }
        flag = false;

        qi = 0;
        qv = -1;

        while(k--)
        {
            int i,j;
            cin>>i>>j;
            G[i].push_back(j);
        }
        color[0]=true;
        //cout<<0<<endl;
        bfs(G,0);
        if(flag)
        {
            cout<<"NOT BICOLORABLE."<<endl;
        }
        else
        {
            cout<<"BICOLORABLE."<<endl;
        }
    }
    return 0;
}
