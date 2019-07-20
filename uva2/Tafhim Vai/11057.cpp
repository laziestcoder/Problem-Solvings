#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <cstdlib>
#include <vector>
#include <climits>
#include <set>
#include <algorithm>
#define MI INT_MAX
#define ULONG unsigned long long
#define LLONG long long
#define swap(a,b) {int t=a ; a=b ; b=t; }
#define sz(a) sizeof(a)
#define FOR(i, a, b) for (i=a ; i<b ; i++)
#define QSORT(a,n,s,f) qsort(a,n,sizeof(s),f)
using namespace std;
int a[20000]={0};

bool cmp(int x, int y)
{
    return (x<y);
}
int cmp2(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    int n, i, val, *p, x, s, maxDiff, pX, pY;

    while (scanf("%d",&n)==1)
    {

        for (i=0 ; i<n ; i++)
        {
            scanf("%d",&a[i]);

        }
        scanf("%d",&val);
        QSORT(a,n,int,cmp2);
        maxDiff = 9999999;
        for (i=0 ; i<n-1 ; i++)
        {
            x=a[i];
            s = val-x;

            p = NULL;
            p = (int*)bsearch(&s,&a[i+1],n-i-1,sizeof(int),cmp2);
            if (p)
            {
                if (abs((*p)-x)<maxDiff)
                {
                    pX = x;
                    pY = (*p);
                    maxDiff = abs((*p)-x);

                }
            }

        }
        if (pX>pY) swap(pX,pY);
        printf("Peter should buy books whose prices are %d and %d.\n\n",pX,pY);

    }
    return 0;
}
