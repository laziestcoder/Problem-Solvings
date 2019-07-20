Method:

I used DP concept here
1. First generate all cubes up to 1000000000. It comes down to
an array of 1000 cubes
2. Then run a two dimensional loop, it means
   loop {
        loop {}
   }
where the cubes are added for possible taxicab numbers.
Storing them is on your part. In my method I used a verifier
to see if a number was found earlier each time it's found and
if so I added it. You can get then all down at one go and then
create another array with no repetitions. Mine takes more time.
3. Then when given any lower limit and range you can perform
linear searches, won't exceed time limit.

FYI, the number of Taxicab numbers in total is 1554. My 2nd
step generates 1562 where 8 numbers are repeated. You can see
which are they by enabling the last disabled for loop.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int bar[2000], found[10000000]={0};
bool ver[1000100000]={false};

int cmp(const void *a, const void *b) {
    return (*(int*)a-*(int*)b);
}

int main() {
    int i, low_lim, rng, j, k, key, counter, *get, l, insert;
    for (i=0 ; i*i*i<=1000000000 ; i++) {
        bar[i]=i*i*i;
    }
    int lim = i;

    for (j=1, k=0 ; j<1001 ; j++) {
        for (i=j+1 ; i<1001 ; i++) {
            if (bar[i]+bar[j]>1000100000) continue;
            if (ver[bar[i]+bar[j]]==true) {
                found[k++]=bar[i]+bar[j];
            } else {
                ver[bar[i]+bar[j]]=true;
            }
            /*key=bar[i]+bar[j];
            for (l=0, insert=0 ; l<k ; l++) {
                if ()
            }*/
        }


    }

    qsort(found,k,sizeof(int),cmp);

    /*for (i=0, counter=0 ; i<k ; i++) {
        if (i>0 && found[i]==found[i-1]) {
            counter++;
        }
    }*/

    /*k=k-counter;*/

    while (scanf("%d",&low_lim)!=EOF) {
        scanf("%d",&rng);

        for (i=0 ; i<k && found[i]<low_lim ; i++);
        for (i, insert=0 ; i<k && found[i]<=low_lim+rng ; i++) {
            insert=1;
            if (found[i]!=found[i-1]) printf("%d\n",found[i]);
        }
        if (!insert)
            printf("None\n");

    }

    return 0;
}
