My solution simply simulates what is described in the problem, but if you wanna know how to shorten this code then there is one thing to know, you’re looking for x for maximum n%x.


#include <stdio.h>
#define MAX 10000

int ver[MAX+3]={0};
int primes[MAX+3];

int gen() {
    int i, j, k=0;
    for (i=2 ; i<=MAX ; i++) {
        if (!ver[i]) {
            primes[k++]=i;
            for (j=2 ; i*j<=MAX ; j++) {
                ver[i*j]=1;
            }
        }
    }
    return k;
}

int main() {
    int q=gen(), high, low, t, p, i, x, n, max, res;

    scanf("%d",&t);

    while (t--) {
        max = -1;
        res = -1;
        scanf("%d",&n);
        for (i=0 ; i<q && primes[i]<=n ; i++) {
            x = primes[i];
            low = (n-x)/x;
            high = n/x;
            for (p=low ; p<=high ; p++) {
                if (max<(n-p*x)) {
                    max = n-p*x;
                    res = x;
                }
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
