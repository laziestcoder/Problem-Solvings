#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("12100.txt", "r", stdin);
    int t;
    cin>>t;
    queue < pair <int,int> > q;
    priority_queue<int> pq;
    for(int cs=1,n,m; cs<=t; cs++)
    {
        cin>>n>>m;

        for(int i=0, k; i<n; i++)
        {
            cin>>k;
            q.push(make_pair(i,k));
            pq.push(k);
        }
        int ans = 0;
        while(!q.empty())
        {
            if(q.front().second == pq.top())
            {
                ans++;
                if(q.front().first == m )
                {
                    break;
                }
                q.pop();
                pq.pop();
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
        }
        cout<<ans<<endl;
        while(!q.empty()) q.pop();
        while(!pq.empty()) pq.pop();

    }
    return 0;
}
