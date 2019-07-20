Methods used, Modified Sieve of Erastosense. Because you have to print the numbers so you have to go to a bit of brute forcing at least to a a minimum level. So first generate all the primes till sqrt(1000000) and then for all n, m go through all the numbers while checking them for divisibility with the primes in your sieve.


#include <stdio.h>
#define SWAP(a,b) {int t = a; a = b; b = t;}
bool ver[32000]={false};
int primes[4000]={0};

int gen() {
    int i, j, k=0;


    for (i=2 ; i<=32000 ; i++) {
        if (ver[i]==false) {
            primes[k++]=i;
            /*printf("%d\n",i);
            getchar();*/
            for (j=2 ; j>0 && i*j<=32000 ; j++) {
                ver[i*j]=true;
            }
        }
    }
    primes[0]=2;
    /*for (i=0 ; i<10 ; i++)
        printf("%d\n",primes[i]);*/

    return k;
}

int main() {
    int p = gen(),t,i,j,low,high;
    bool print;

    scanf("%d",&t);

    while (t--) {
        scanf("%d %d",&low,&high);

        if (high<low)
            SWAP(high,low);
        if (low == 1) low++;
        if (low == 0) low+=2;

        for (i=low ; i<=high ; i++) {
            for (j=0, print=true ; primes[j]*primes[j]<=i ; j++) {
                if (i%primes[j]==0) {
                    print = false;
                    break;
                }
            }
            if (print) printf("%d\n",i);
        }
        printf("\n");
    }


    return 0;
}
