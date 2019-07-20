#include <stdio.h>
#include <iostream.h>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;

#define MAX 50003
#define MAXINT 2147483647
bool ver[MAX]={false};
int ps[MAX], cnt[MAX][2];

int gen(int hiMAX) {
    int i, j, k=0;

    for (i=2 ; i<=hiMAX ; i++) {
        if (!ver[i])
            ps[k++]=i;
        for (j=i*i ; j>0 && j<=hiMAX ; j+=i*2) {
            ver[j]=true;
        }
    }
    return k;
}

int get_count(int n, int p) {

    /*printf("get_count(%d, %d)\n",n,p);*/

    int sum=0, f=1;
    while (n/f>0) {
        f*=p;
        if (f<0)
            break;
        sum+=n/f;
    }
    return sum;
}

int main() {
    int i;
    int c, m, n, tmp_n, tmp_m, count, p = gen(50000);
    bool div;

    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/

    while (scanf("%d %d",&n,&m)!=EOF) {
        tmp_m = m;
        tmp_n = n;

        if (m==0 || n==0) {
            if (m==1)
                printf("%d divides %d!\n",m,n);
            else
                printf("%d does not divide %d!\n",m,n);
            continue;
        }
        if (m<=n) {
            printf("%d divides %d!\n",m,n);
            continue;
        }
        div = false;
        for (i=0 ; i<p && ps[i]*ps[i]<=m ; i++) {
            if (m%ps[i]==0) {
                div = true;
                break;
            }
        }
        if (div==false) {
            printf("%d does not divide %d!\n",m,n);
            continue;
        }

        for (i=0, c=0 ; i<p && ps[i]*ps[i]<=tmp_m ; i++) {
            if (tmp_m%ps[i]==0) {
                cnt[c][0]=ps[i];
                cnt[c][1]=0;
                while (tmp_m%ps[i]==0) {
                    tmp_m = tmp_m/ps[i];
                    cnt[c][1]++;
                }
                c++;
            }
        }
        if (tmp_m>1) {
            cnt[c][0]=tmp_m;
            cnt[c][1]=1;
            c++;
        }
        /*for (i=0 ; i<c ; i++) {
            printf("%d %d %d\n",m,cnt[i][0],cnt[i][1]);
        }*/

        for (i=0 ; i<c ; i++) {
            tmp_n = n;
            count = get_count(n,cnt[i][0]);
            if (count<cnt[i][1])
                break;
        }
        if (i<c) printf("%d does not divide %d!\n",m,n);
        else printf("%d divides %d!\n",m,n);
    }

    return 0;
}
