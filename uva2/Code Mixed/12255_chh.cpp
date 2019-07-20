#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
#define LL long long
struct Pt {
    LL x, y;
    bool operator<(const Pt &a) const {
        if(x != a.x)    return x < a.x;
        return y > a.y;
    }
};
Pt p[10000];
LL K, D;
int N, S;
int check(int M) {
    int i = 0, used = 0;
    Pt sniper;
    sniper.y = K-M;
    do {
        LL a, b;
        b = p[i].y - (K-M);
        if(b > D)    return 0;
        a = (LL)sqrt(D*D-b*b);
        sniper.x = a+p[i].x, sniper.y = K-M;
        i++, used++;
        while(i < N) {
            if((sniper.x-p[i].x)*(sniper.x-p[i].x)+(sniper.y-p[i].y)*(sniper.y-p[i].y) > D*D)
                break;
            i++;
        }
    } while(i < N && used <= S);
    return used <= S && i == N;
}
int main() {
    int testcase, cases = 0;
    int i, j, k;
    scanf("%d", &testcase);
    while(testcase--) {
        scanf("%lld %d %d %lld", &K, &N, &S, &D);
        for(i = 0; i < N; i++)
            scanf("%lld %lld", &p[i].x, &p[i].y);
        sort(p, p+N);
        LL l = 0, r = D, mid;
        LL ret;
        printf("Case %d: ", ++cases);
        if(check(0) == 0) {
            puts("IMPOSSIBLE");
            continue;
        }
        while(l <= r) {
            mid = (l+r)/2;
            if(check(mid))
                l = mid+1, ret = mid;
            else
                r = mid-1;
        }
        printf("%lld\n", ret);
    }
    return 0;
}
