Very easy problem, couple of holes to look for to avoid TLE. Keep track if a number is revisited during the happy checks😉 Otherwise it might make you sad. And make a list instead of HAPPY/NOT-HAPPY list. Makes things faster.

Critics: Not much, see if your cycle number for 1 is 1. It’s gotta be 1.

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
int sqrs[10];
int digSums[100000]={0};
int list[100000][2];
void sqr()  //Function to generate squre of all decimal digits
{
    for (int i=0 ; i<=9 ; i++)
    {
        sqrs[i]=i*i;
    }
}
int digSum(int n)
{
    if (digSums[n])
        return digSums[n]; //If the value is already there, precalculated

    int sum=0, temp=n;
    while (n)
    {
        sum += sqrs[n%10];
        n/=10;
    }
    digSums[temp]=sum;
    return digSums[temp];
}
int happyList()
{
    int i, j, k=0, cycle=0;
    bool happy;
    sqr();
    for (i=1 ; i<=99999 ; i++)
    {
        bool vis[500]={false}; // Keeping track of cycles
        cycle=0;
        for (j=digSum(i), happy=false ; j<=405 ; j=digSum(j)) //the limit 405 is because sum_of_sqr_of_digits(999999) = 405
        {
            cycle++;
            if (j==1)
            {
                happy=true;
                break;
            }
            if (j==i || vis[j]) // Cycle detection
            {
                happy=false;
                break;
            }
            vis[j]=true;
        }
        if (happy)
        {
            list[k][0]=i;
            list[k][1]=cycle+1;
            k++;
        }
    }
    return k;
}


int main()
{
    int a, b, i, kase=1, listLength;
    listLength=happyList();

    if (a>=b) swap(a,b);

    list[0][1]=1; //System faults :p

    while (cin >> a >> b)
    {
        if (kase++>1) cout << endl;
        for (i=0 ; list[i][0]<a && i<listLength ; i++)
        {
            //cout << "Passing" << endl;
        }
        for (i ; list[i][0]<=b && i<listLength ; i++)
        {
            cout << list[i][0] << " " << list[i][1] << endl;
        }
    }
    return 0;
}

