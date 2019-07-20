9 Hours. I can take on anything now.😀
The fault was in my queue. Not because it’s operations were wrong. But due to the vertex structure that I was using, the memory somehow got overlapped with the bigger arrays I guess I don’t know. A simple debugging brought that in front and I knew what I had to do. Just kicked my queue away and put STL. This is the only BFS implementation of this that I’ve seen so far. Rank 18, not bad for all this. =]

If your code isn’t working with the I/O given by forum users then try the extreme cases. 100×100 Ws and 100×100 Ls. Mine got caught on the first.

What I did was when a node is first found with a W and color[] as White, I set it as the root of that whole Water area. Every node I visited after queuing the root had the root’s address. The area is increased by 1 on every node the queue opens. And when a root finishes it’s queue operation it gets the area saved in it’s Area Matrix position. So whenever a root or it subnodes are inquired for area, you get the address of the root from that node in O(1) and then print the address from Area[root] Matrix.

I knew it was easy with DFS and counting but I just love the customizable nature of BFS.

#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#define XMC 100
using namespace std;

char grid[XMC][XMC], input[XMC];
int a[XMC][XMC];

typedef struct v
{
    int x, y;
} vertex;

vertex r[XMC][XMC];

void bfs(int rows, int cols)
{

    //printf("BFS %d %d\n",rows,cols);

    bool c[XMC][XMC];

    int i, j, k, l, area, areacount=0, prootx, prooty;
    vertex proot, u, v, root;

    for (i=0 ; i<=rows ; i++)
    {
        for (j=0 ; j<=cols ; j++)
        {
            c[i][j] = false;
        }
    }

    for (i=0 ; i<rows ; i++)
    {
        for (j=0 ; j<cols ; j++)
        {
            if (c[i][j]==true || grid[i][j]!='W')
                continue;

            proot = {i,j};

            root = proot;

            c[i][j] = true;
            r[i][j] = root;

            //printf("BFS: Rooting for %d %d\n",r[i][j].x,r[i][j].y);

            area = 1;

            queue<vertex> q;
            q.push(root);
            while (!q.empty())
            {
                u = q.front();
                q.pop();
                for (k=u.x-1 ; k<=u.x+1 && k<rows ; k++)
                {
                    if (k<0) k++;
                    for (l=u.y-1 ; l<=u.y+1 && l<cols ; l++)
                    {
                        if (l<0) l++;
                        if (c[k][l]==false && grid[k][l]=='W')
                        {
                            //printf("BFS: \t%d %d - %d %d\n",k,l,r[i][j].x,r[i][j].y);
                            c[k][l] = true;
                            r[k][l] = root;
                            area = area + 1;
                            v = {k,l};
                            q.push(v);
                            //if (r[i][j].x!=prootx) r[i][j].x = prootx;
                            //if (r[i][j].y!=prooty) r[i][j].y = prooty;
                        }
                    }
                }
            }
            a[i][j] = area;
            r[i][j] = proot;
            //printf("Found area %d in %d-%d\n",++areacount,r[i][j].x,r[i][j].y);
        }
    }

}

int main()
{

    //freopen("469_in.txt","r+",stdin);
    //freopen("469_out.txt","w+",stdout);

    int test, i, j, rows, cols, rp, cp;
    vertex root;
    bool blanker=false, run;

    scanf("%d",&test);
    getchar(); getchar();
    while (test--)
    {
        if (blanker)
            printf("\n");
        else
            blanker=true;

        run = false;
        i = 0;

        while (gets(input) && strlen(input) > 0)
        {
            if (input[0] == 'L' || input[0] == 'W')
            {
                strcpy(grid[i++],input);
                cols = strlen(input);
                rows = i;
            } else
            {
                if (!run)
                {
                    bfs(rows,cols);
                    run = true;
                }
                sscanf(input,"%d %d",&rp, &cp);
                rp--; cp--;
                if (grid[rp][cp]!='W')
                    printf("0\n");
                else if (rp>=rows || cp >=cols || rp<0 || cp<0)
                    printf("0\n");
                else
                {
                    root = {r[rp][cp].x,r[rp][cp].y};
                    //printf("Accessing %d//%d %d//%d\n",root.x,r[rp][cp].x, root.y,r[rp][cp].y);
                    printf("%d\n",a[root.x][root.y]);
                }
            }
        }
    }
    return 0;
}
