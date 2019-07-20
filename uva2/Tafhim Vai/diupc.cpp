#include <stdio.h>
#define MAX 1000000
bool ver[MAX+3]={false};
int primes[MAX+3];
int nods[MAX+3];

int gen() {
    int i, j, k=0;

    for (i=2 ; i<=MAX ; i++) {
        if (ver[i]==false) {
            primes[k++]=i;
            for (j=2 ; i*j<=MAX ; j++) {
                ver[i*j]=true;
            }
        }
    }


    return k;
}

int nod(int n) {

        int i, j, c, count=1, temp;

        for (j=0, c=0 ; primes[j]*primes[j]<=n ; j++) {
            c=1;
            temp=primes[j];
            while (n%temp==0) {
                n/=temp;
                c++;
            }
            count*=c;
        }


        if (n==1) { /*putchar('x');*/ return count; }
        else return count*2;
}

int main() {
    int i, x, y, sum;
    /*clock_t start=clock(), end;*/
    int p=gen();
    /*end=clock();
    printf("Time taken: %lf\n",(double)(end-start)/CLOCKS_PER_SEC);*/

    nods[0]=1;
    nods[1]=2;
    nods[2]=4;
    nods[3]=7;
    nods[4]=12;

    /*for (i=2 ; i<=1000000 ; i++) {
        if (ver[i]==false)
            divs[i]=2;
        else
            divs[i]=nod(i);
        /*printf("%d %d\n",i,divs[i]);
        getchar();
    }*/
    /*end=clock();
    printf("Time taken: %lf\n",(double)(end-start)/CLOCKS_PER_SEC);*/

    for (i=4 ; nods[i-1]<=1000000 ; i++) {
        if (ver[nods[i-1]]==false)
            nods[i]=nods[i-1]+2;
        else
            nods[i]=nods[i-1]+nod(nods[i-1]);
    }

    /*end=clock();
    printf("Time taken: %lf\n",(double)(end-start)/CLOCKS_PER_SEC);*/

    while(scanf("%d %d",&x,&y)) {
        i=0;
        while (nods[i]<x) {
            i++;
        }
        for (i, sum=0 ; nods[i]<=y ; i++) {
            sum++;
        }
        printf("%d\n",sum);
    }
    return 0;

}
