/***
1000000 is no problem. A structure that can contain 2 strings is a good solution. There’s a great function
in the string.h library called strtok() that can parse the two words. Use qsort() and bsearch()
and 0.136s runtime is yours. I got 92nd rank with this so I think it’s a moderate solution, or at the very least a solution.
Just FYI, for searching using bsearch() you need to have the query in a similar structure, not in just a string.

***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct w {
    char en[25], xx[25];
} word;

word dict[1000002] = {0,0};

int cmp(const void *a, const void *b) {
    return strcmp(((word *)a)->xx,((word *)b)->xx);
}
int main() {
    int I=0, J;
    char INPUT[100], *p;
    word *q, QUERY;

    while(gets(INPUT)) {
        if (!strcmp(INPUT,""))
            break;
        p = strtok(INPUT," ");
        strcpy(dict[I].en,p);
        p = strtok(NULL," ");
        strcpy(dict[I].xx,p);
        I++;
    }

    qsort(dict,I,sizeof(word),cmp);

    while(scanf("%s",QUERY.xx)!=EOF) {
        q = bsearch(&QUERY,dict,I,sizeof(word),cmp);
        if (q!=NULL) {
            printf("%s\n",q->en);
        } else {
            printf("eh\n");
        }
    }

    return 0;
}
