Method:

Used DP again. :D I love pre-calculation in runtime. It's so nifty.
Checked all numbers from 1-40000 for a valid Kaprekar representation
and stored the valid ones. There are about 20-30 numbers, forgot it.

#include <stdio.h>

int val[40000];

int main() {

    int i, j, k=0, key, p1, p2, start, end, cases=1, test;

    for (i=1 ; i<=40000 ; i++) {
        key = i*i;
        for (j=10 ; ((int)key/j)>0 ; j*=10) {
            p1 = ((int)key/j)*j;
            p2 = key-p1;
            p1/=j;
            if (p1+p2==i && p1 && p2) {
                val[k++]=i;
                break;
            }
        }
    }

    scanf("%d",&test);

    while (test--) {
        scanf("%d %d",&start,&end);

        printf("case #%d\n",cases++);
        for (i=0 ; i<k && val[i]<start ; i++);
        for (i, j=0 ; i<k && val[i]<=end ; i++) {
            printf("%d\n",val[i]);
            j=1;
        }
        if (!j) {
            printf("no kaprekar numbers\n");
        }
        if (test) printf("\n");
    }

    return 0;

}
