See the posts did in Math on finding the number of divisors of a given number. The method is simple:
Suppose N = a^x * b^y * c^z
Then the number of its divisors is (x+1)*(y+1)*(z+1)


#include <stdio.h>
#define MAX 50000
#define SWAP(a,b) {int t=a; a=b; b=t;}
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
    primes[0]=2;
    return k;

}

int nod(int n) {
    if (n==1) return 1;
    if (n<=MAX && !ver[n]) return 2;
    int j, c, count=1, temp;
    for (j=0 ; primes[j]*primes[j]<=n ; j++) {
        temp = primes[j];
        c=1;
        while (n%temp==0) {
            n/=temp;
            c++;
        }
        count*=c;
        if (n==1) return count;
    }
    if (count!=1) return count*2;
    return 2;
}

int main() {
    int p = gen(), i, j, count, max, x, y, u, d, kase;

    scanf("%d",&kase);


    while (kase--) {
        scanf("%d %d",&x,&y);
        u=x; d=y;
        if (d<u) SWAP(d,u);
        count=0;
        max=0;
        j=u;
        for (i=u ; i<=d ; i++) {
            count = nod(i);
            if (max<count) {
                max = count;
                j=i;
            }
        }

        printf("Between %d and %d, %d has a maximum of %d divisors.\n",x,y,j,max);
    }

    return 0;

}
