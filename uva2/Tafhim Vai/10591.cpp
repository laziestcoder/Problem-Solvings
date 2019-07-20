Method:
Kept a table of happy and unhappy numbers. Once a number is found to be unhappy/happy the whole sequence that is left behind has the same property. I tagged them out using a stack.

/* --------------------------> BISMILLAHIR RAHMANIR RAHIM <------------------------------ */
/* ------------------------> Tafhim Ul Islam [ CSE-09@IIUC ] <--------------------------- */
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

map<int,int> ver;
int sqrs[10];

int digSum(int n)
{

    int sum=0;
    while (n)
    {
        sum+=sqrs[(n%10)];
        n/=10;
    }
    return sum;
}

int sqr()
{
    int i;
    for (i=0 ; i<=9 ; i++)
    {
        sqrs[i]=i*i;
    }
    return 0;
}

int findIf(int n)
{
    int j;
    int stat;

    if (ver[n]==3)
        return 3;

    map<int,bool> vis;
    stack<int> list;
    for (j=digSum(n) ; ; j=digSum(j))
    {
        list.push(j);
        if (vis[j] || ver[j]==1)
        {
            stat=1;
            break;
        }
        if (ver[j]==3)
        {
            ver[n]=3;
            stat=3;
            break;
        }
        if (j==1)
        {
            ver[n]=3;
            stat=3;
            break;
        }
        if (j==n)
        {
            stat=1;
            break;
        }
        vis[j]=true;
    }

    while (!list.empty())
    {
        ver[list.top()]=stat;
        list.pop();
    }

    return stat;
}

int main()
{

    sqr();

    int test, inp, kase=1;
    scanf("%d",&test);
    while (test--)
    {
        scanf("%d",&inp);

        printf("Case #%d: ",kase++);

        if (findIf(inp)==3)
            printf("%d is a Happy number.\n",inp);
        else
            printf("%d is an Unhappy number.\n",inp);
    }
    return 0;
}



