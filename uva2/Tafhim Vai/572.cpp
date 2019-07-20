Simple DFS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int color[200][200], d[200][200], pi[200][200], f[200][200];
unsigned char graph[200][200]={0};
int time, nrows, ncols, count=0;


void DFS_visit(int ux, int uy) {
    int i, j, k, v;
    color[ux][uy]=1;
    time = time + 1;
    d[ux][uy] = time;
    i=ux-1;

    if (i<1) i++;

    for (; i<=ux+1 ; i++) {
        j=uy-1;
        if (j<1) j++;
        for ( ; j<=uy+1 ; j++) {
            if (i==ux && j==uy)
                continue;

            if (color[i][j]==0 && graph[i][j]=='@')
                DFS_visit(i,j);
        }
    }
    color[ux][uy]=2;

    f[ux][uy] = time = time + 1;


}

void DFS() {
    int i, j, k, v;

    for (i=1 ; i<=nrows ; i++) {
        for (j=1 ; j<=ncols ; j++) {
            color[i][j]=0;
            pi[i][j]=-1;
            d[i][j]=99999;
            f[i][j]=99999;
        }
    }
    time = 0; /* - Global - */
    for (i=1 ; i<=nrows ; i++) {
        for (j=1 ; j<=ncols ; j++)
            if (color[i][j]==0 && graph[i][j]=='@') {
                count++;
                DFS_visit(i,j);
            }
    }

}

int main() {
    int i, j;
    while (scanf("%d %d",&nrows,&ncols)!=EOF) {
        count=0;
        if (nrows==0 || ncols==0)
            break;
        getchar();

        for (i=1 ; i<=nrows ; i++) {
            for (j=1 ; j<=ncols ; j++) {
                scanf("%c",&graph[i][j]);
            }
            getchar();
        }

        DFS();

        printf("%d\n",count);


    }

}
