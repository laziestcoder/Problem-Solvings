First color the whole graph using DFS
Then recheck the given edge list for common colors in vertexes.


bool state;
int c[1000], color[1000], clr, n, adj[1000][1000], list[1000][2];
void dfs_core(int i, int n, int p)
{
    int j;

    color[i]=true;
    if (p<0) c[i]=0;
    else c[i]=(p+1)%2;

    FOR(j, 0, n)
    {
        if (!color[j] && adj[i][j])
        {
            dfs_core(j,n,c[i]);
        }

    }
}
void dfs_shell(int n)
{
    int i;

    clr=0;
    FOR(i, 0, n)
    {
        color[i]=false;
        c[i]=-1;
    }
    FOR(i, 0, n)
    {
        if (!color[i])
            dfs_core(i,n,c[i]);
    }
}

int main()
{
    int i, j, x, y, e;
    while (scanf("%d",&n) && n)
    {
        FOR(i, 0, n)
        {
            FOR(j, 0, n)
            {
                adj[i][j]=0;
            }
        }
        scanf("%d",&e);
        FOR(i, 0, e)
        {
            scanf("%d %d",&x,&y);
            adj[x][y]=adj[y][x]=1;
            list[i][0]=x;
            list[i][1]=y;
        }
        dfs_shell(n);

        state=true;
        FOR(i, 0, e)
        {
            if (c[list[i][0]]==c[list[i][1]])
            {
                state=false;
                break;
            }
        }

        if (state)
        {
            printf("BICOLORABLE.\n");
        } else
        {
            printf("NOT BICOLORABLE.\n");
        }
    }
    return 0;
}
