Could’ve been a lot better code, but I had to solve and submit it tomorrow (check the date) for the ACM Classes at my uni. I think the most logical algo to use here is Floyd-Warshall’s APSP. But our trainer wanted this in BFS. Whatever, yielded a better BFS to use in other scenarios:). Yeah yeah, look at the bright side.

#include <stdio.h>
#include <queue>
using namespace std;
int color[30], pi[30], d[30], adj[30][30];
void BFS(int s, int p) {
    int i, u, v;
    for (i=20 ; i>=1 ; i--) {
        color[i]=0;
        d[i]=9999;
        pi[i]=-1;
    }

    color[s]=1;
    d[s]=0;
    pi[s]=-1;

    queue<int> q;

    q.push(s);

    while (!q.empty()) {
        u = q.front();
        q.pop();
        for (v=1 ; v<=20 ; v++) {
            if (color[v]==0 && adj[u][v]) {
                color[v]=1;
                d[v]=d[u]+1;
                pi[v]=u;
                q.push(v);
            }
        }
        color[u]=2;
    }

}


int main() {

    int i, j, f_pc, t_v, nq, x, y, test=1, dis;

    while (scanf("%d",&f_pc)!=EOF) {
        printf("Test Set #%d\n",test++);
        for (i=1 ; i<=20 ; i++) {
            for (j=1 ; j<=20 ; j++) {
                adj[i][j]=0;
            }
        }
        for (i=1 ; i<=f_pc ; i++) {
            scanf("%d",&t_v);
            adj[1][t_v]=1;
            adj[t_v][1]=1;
        }
        for (i=2 ; i<=19 ; i++) {
            scanf("%d",&f_pc);
            for (j=1 ; j<=f_pc ; j++) {
                scanf("%d",&t_v);
                adj[i][t_v]=1;
                adj[t_v][i]=1;
            }
        }



        scanf("%d",&nq);

        for (i=1 ; i<=nq ; i++) {
            scanf("%d %d",&x,&y);
            if (x>y) {
                if (!adj[x][y]) {
                    BFS(y,x);
                    dis=d[x];
                } else dis = 1;
                printf("%2d to %2d: %d\n",x,y,dis);
            }
            else {
                if (!adj[x][y]) {
                    BFS(x,y);
                    dis=d[y];
                } else dis=1;
                printf("%2d to %2d: %d\n",x,y,dis);
            }
        }
        printf("\n");

    }
    return 0;

}
