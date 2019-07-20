Analysis:
Draw the coordinate system but start from 1 not 0, just to escape negative value problems. Draw it like a triangle where the top has 1. Now see that on the right side, every i-th number is the sum of all numbers till i.
1 = 1x(1+1)/2
3 = 2x(2+1)/2
6 = 3x(3+1)/2
10 = 4x(4+1)/2
15 = 5x(5+1)/2
So, given the x coordinate you can find the first number in that row using X*(X+1)/2, BUT make X=X+1 first.
To find the Y-th element (in my case (Y+1)-th, you can use the formula
S = a + (a+d) + (a+2d) + … + [a + (n-1)d] = n[2a + (n-1)d]/2
But you have to modify it a bit first. This is derived from the analysis that every number in a row has some initial numbers lost except the first row. In X=2, 2 is not in the series, in X=3, 3 and 4 are not in the series. This keeps increasing by 1 at every i. So the series is
Y[0], Y[0]+1×1, Y[0]+1×2, Y[0]+1×3 ……
So you can simply use the formula with a=0 and n=Y+(X-1). Just add X to that.
Find both the numbers this way and print their difference. Done!!!.

http://cnyack.homestead.com/files/MathBgnd/series.htm

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
int sum(int a, int n)
{
    return n*(2*a+(n-1)*1)/2;
}
int main()
{
    int test, kase=1, x1, x2, y1, y2, num1, num2, temp, n, a;
    scanf("%d",&test);
    while (test--)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        x1++; x2++; y1++; y2++;


        num1 = x1+(sum(0,y1+(x1-1)));
        num2 = x2+(sum(0,y2+(x2-1)));


        printf("Case %d: %d\n",kase++,num2-num1);
    }
    return 0;
}
