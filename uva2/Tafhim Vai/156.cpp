#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>

typedef struct w {

    char orig[100], sort[100];

} word;

word dict[1002]={0,0};

char print[1002][100];

int cmp_c(const void *a, const void *b) {
    return (*(char*)a-*(char*)b);
}

int cmp_s(const void *a, const void *b) {
    return (strcmp(a,b));
}



int main() {

    int i, j, k, l;
    int p;

    for (i=0 ; scanf("%s",dict[i].orig) && strcmp(dict[i].orig,"#") ; i++) {

        for (j=0 ; dict[i].sort[j]=tolower(dict[i].orig[j]) ; j++);

        qsort(dict[i].sort,strlen(dict[i].sort),sizeof(char),cmp_c);

    }

    for (j=0, p=0, l=0 ; j<i ; j++, p=0) {
        if (strlen(dict[j].orig) == 1) {
            strcpy(print[l++],dict[j].orig);
            continue;
        }
        for (k=0 ; k<i ; k++) {
            if (!strcmp(dict[k].sort,dict[j].sort) && k!=j){
                p=1;
                break;
            }
        }
        if (!p) strcpy(print[l++],dict[j].orig);
    }

    qsort(print,l,sizeof(print[0]),cmp_s);

    for (k=0 ; k<l ; k++) printf("%s\n",print[k]);

    return 0;
}
