Method:

1. Take all the input, store the weights sequentially and they are
already sorted, if you didn't notice.
2. Then simply keep adding eggs from that until either one of
p or q is exceeded.
3. Print the count.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gms[1000]={0};

int main() {

    int test, n, p, q, c, i, cases=1;

    scanf("%d",&test);

    while (test--) {
        scanf("%d %d %d",&n,&p,&q);

        for (i=0 ; i<n ; i++) {
            scanf("%d",&gms[i]);
        }
        for (i=0, c=0 ; i<n ; i++) {
            if (i>=p || c+gms[i]>q) {break;}
            else c+=gms[i];
        }
        printf("Case %d: %d\n",cases++,i);
    }

    return 0;
}
