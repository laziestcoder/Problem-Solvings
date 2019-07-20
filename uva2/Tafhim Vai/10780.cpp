The main principle behind this problem is ofcourse that “To know if m divides n! you have to find all the prime factors of m in n atleast as many times as they are in m”.
But here’s another degree of that. You have to get the power of m that divides n!.

Just a simple modification of the original method. Suppose m^k divides n!. So all the prime factors in m^k will be in n.
Now if the prime factorization of m^1 are x^1 x y^1 and m^k divides n! then
prime factorization of m^k is x^(1xk) + y^(1xk). Then finding the minimal level at which the powers of the prime factors of m and n are matched you get k because then the power is common at both the areas.


#include <stdio.h>
#include <math.h>
#define P_MAX 5000
int ver[P_MAX+3]={0};
int prs[P_MAX+3];
int divs[2000][2];
int max(int a, int b) {
    if (a>b) return a;
    else return b;
}
int min(int a, int b) {
    if (a<b) return a;
    else return b;
}

int gen(int lim_HPRIME) {
    int i, j, k=0;

    for (i=4 ; i<=lim_HPRIME ; i+=2) {
        ver[i] = 1;
    }

    for (i=3 ; i<=lim_HPRIME ; i+=2) {
        for (j=i*i ; j>0 && j<=lim_HPRIME ; j+=i*2) {
            ver[j]=1;
        }
    }
    for (i=2 ; i<=lim_HPRIME ; i++) {
        if (!ver[i]) prs[k++]=i;
    }

    return k;
}

int get(int n, int p) {
    int count=0, m=p;

    while (n/m>0) {
        count += n/m;
        m*=p;
    }

    return count;
}


int main() {

    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/

    int nCASES, m, n, dc, res, tmp_m, tmp_n, kount=1, i, p=gen(P_MAX), mx_n, mx_m;
    scanf("%d",&nCASES);

    while (nCASES--) {
        scanf("%d %d",&m,&n);
        printf("Case %d:\n",kount++);

        mx_m = 99999;
        for (i=0, tmp_m=m, tmp_n=n, dc=0 ; i<p && prs[i]<=m ; i++) {

            /*tmp_m = m;*/

            if (tmp_m%prs[i]==0) {
                divs[dc][0]=prs[i];
                divs[dc][1]=0;
                while (tmp_m%prs[i]==0) {
                    divs[dc][1]++;
                    tmp_m/=prs[i];
                }
                /*mx_m = min(mx_m,divs[dc][1]);*/
                dc++;
            }
        }
        if (tmp_m > 1) {
            divs[dc][0] = tmp_m;
            divs[dc][1] = 1;
            dc++;
        }

        /*for (i=0 ; i<dc ; i++) {
            printf("%d %d\n",divs[i][0],divs[i][1]);
        }*/

        mx_n = 99999;
        for (i=0 ; i<dc ; i++) {
            res=get(tmp_n,divs[i][0]);
            mx_n = min(mx_n,res/divs[i][1]);
            if (res<divs[i][1])
                break;
        }
        if (i<dc)
            printf("Impossible to divide\n");
        else {
            printf("%d\n",(int)mx_n);
        }

    }
    return 0;

}
