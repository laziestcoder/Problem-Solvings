/**
    Team    : IIUC Debug & Conquer
**/
#include<bits/stdc++.h>
using namespace std;

#define PI acos(0)
#define inf 100000000
#define EPS 1e-9
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
//#define mod 1000000007
long long F(long long N)
{
    long long i, j, result = 0;
    for (i = 1; i < N; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if(i % j == 0 && N % j == 0) break;
        }
        if (j > i || i == 1)
        {
            result += (i + N);
            result %= 1000000007;
        }
    }
    return (result % 1000000007);
}

int main()
{
    long long T, N, i;
    scanf("%lld", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%lld", &N);
        printf("Case %lld: %lld\n", i, F(N));
    }
    return 0;
}
