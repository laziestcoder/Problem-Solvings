Very simple if you think with Structures and stdlib’s qsort. Nothing can beat you. No blank line at the end and this is counting your solved list up.


#include "stdio.h"
#include "string.h"
#include "stdlib.h"

typedef struct th {
    char word[55];
    int sort;
} DNA;

DNA str[110]={0,0};

int cmp(const void *a, const void *b) {
    return (((DNA *)a)->sort-((DNA *)b)->sort);
}

int main() {

    int i, j, k, t, n, m;
    char blank[10];

    scanf("%d",&t);
    getchar();

    while (t--) {
        gets(blank);
        scanf("%d %d",&n,&m);

        for (i=0 ; i<m ; i++) {
            str[i].sort=0;
            scanf("%s",str[i].word);

            for (j=0 ; j<n ; j++) {
                for (k=j+1 ; k<n ; k++) {
                    if (str[i].word[j]>str[i].word[k]) {
                        str[i].sort++;
                    }
                }
            }
        }
        qsort(str,m,sizeof(DNA),cmp);
        for (i=0 ; i<m ; i++) {
            printf("%s\n",str[i].word);
        }
        if (t) printf("\n");
        getchar();
    }


    return 0;

}
