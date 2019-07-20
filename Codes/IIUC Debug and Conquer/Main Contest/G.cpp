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

int main()
{
    long long baly, shaly;
    int T, N;
    long long king[101][101];
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        baly = 0;
        shaly = 0;
        scanf("%d", &N);
        for (int row = 1; row <= N; row++)
        {
            for (int col = 1; col <= N; col++)
            {
                scanf("%lld", &king[row][col]);
                if (col > row)
                {
                    shaly += king[row][col];
                } else if (row > col)
                {
                    baly += king[row][col];
                }
            }
        }
        if (shaly > baly)
        {
            printf("Case %d: Shaly\n", i);
        } else if (baly > shaly)
        {
            printf("Case %d: Baly\n", i);
        } else
        {
            printf("Case %d: Both\n", i);
        }
    }
    return 0;
}

