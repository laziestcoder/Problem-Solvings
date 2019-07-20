Method:
Straightforward, take input, then make the decision if the
strings match.
If <=D 1,
else if <=D+5 2,
else 3.
Now print based on the stat, simple

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct s {
    char name[100];
    int req;
} sub[1000]={0,0};

int main() {

    int test, fs, i, n_sp_list, d, cases=1;
    char querry[100];

    scanf("%d",&test);

    while (test--) {
        for (scanf("%d",&n_sp_list), i=0 ; i<n_sp_list ; i++) {
            scanf("%s",&sub[i].name);
            scanf("%d",&sub[i].req);
        }
        scanf("%d",&d);
        scanf("%s",&querry);
        for (i=0, fs=0 ; i<n_sp_list ; i++) {
            if (!strcmp(sub[i].name,querry)) {
                if (sub[i].req<=d) {
                    fs=2;
                    break;
                } else if (sub[i].req<=(d+5)) {
                    fs=1;
                    break;
                } else {
                    fs=0;
                    break;
                }
            }
        }
        if (fs==0) {
            printf("Case %d: Do your own homework!\n",cases++);
        } else if (fs==1) {
            printf("Case %d: Late\n",cases++);
        } else {
            printf("Case %d: Yesss\n",cases++);
        }
    }
    return 0;
}
