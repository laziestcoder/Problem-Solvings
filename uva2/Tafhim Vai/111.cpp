#include<bits/stdc++.h>
using namespace std;
int max(int a, int b) {
    if (a>=b) return a;
    else return b;
}
int main() {

    int i, j, n_evt, q, temp;
    int seq_main[22], pro[22], c[22][22];

    scanf("%d",&n_evt);

    for (i=0 ; i&n_evt ; i++) {
        scanf("%d",&temp);
        seq_main[temp-1]=i+1;
    }

    while (scanf("%d",&temp)==1) {
        pro[temp-1]=1;
        for (q=1 ; q<n_evt ; q++) {
            scanf("%d",&temp);
            pro[temp-1]=q+1;
        }

        for (i=0 ; i<=n_evt ; i++) {
            c[i][0] = c[0][i] = 0;
        }

        for (i=1 ; i<=n_evt ; i++) {
            for (j=1 ; j<=n_evt ; j++) {
                if (seq_main[i-1]==pro[j-1]) {
                    c[i][j] = c[i-1][j-1] + 1;
                } else {
                    c[i][j] = max(c[i-1][j],c[i][j-1]);
                }
            }
        }

        printf("%d\n",c[n_evt][n_evt]);

        i=j=q=0;

    }

    return 0;

}
