/* Faith-M */

//Headers
#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <climits>
#include <clocale>
//Defines
#define pow2(i) (1<<i)
#define bit(i) (1<<i)
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define isPrime(i) ((i==2) || ((i&1) && !pTest[i])) //pTest has to be the bool array's name
#define sz(i) i.size()
#define vec(type,name) vector< type > name
#define rep(i,a,b) for(int i=a ; i<=b ; i++)
#define swap(type,a,b) {type t=a; a=b; b=t;}
#define sum(a,n) ( (n*(n+1)/2) - (a-1)*a/2 )
#define iscap(i) (i>='A'&&i<='Z')
#define issmall(i) (i>='a'&&i<='z')
#define isnum(i) (i>='0'&&i<='9')
#define issymbol(i) (!(i>='a'&&i<='z') && !(i>='A'&&i<='Z') && !(i>='0'&&i<='9'))
#define mk(i,j) make_pair(i,j)
#define ERROR 1e-11
#define mx(a,b) (a>b?a:b)
//Type Defs
typedef long long lint;
typedef unsigned long long ulint;
typedef long double ldouble;

using namespace std;

bool ver[1000000];
bool crm[65000];

int sv()
{
    int i, j, k=1;

    ver[0]=ver[1]=true;
    ver[2]=false;
    for (i=3 ; i<=65000 ; i+=2)
    {
        if (!ver[i])
        {
            k++;
            for (j=3 ; i*j<=65000 ; j+=2)
            {
                ver[i*j] = true;
            }
        }
    }
    return k;
}



//long bigmod(long b,long p,long m) {
//    if (p == 0)
//        return 1;
//    else if (p%2 == 0)
//        return square(bigmod(b,p/2,m)) % m; // square(x) = x * x
//    else
//        return ((b % m) * bigmod(b,p-1,m)) % m;
//}

lint powr(lint a, lint n)
{
    lint t = n;
    lint x = a%n;

    while (t-->1)
    {
        //if (a>=n) a%=n;
        a%=n;
        a*=(x);
    }
    return (a%n);
}

lint pwr(lint n, lint p, lint b)
{
    if (!p) return 1; // Joke

    lint r=1;

    while (p > 0)
    {
        if ((p&1) == 1)     // The current power is odd so after sqrt() modding u multiply an extra n
        {
            r = (r * n) % b;
        }

        p >>= 1;    // Shifting 1 bit right, getting to the next power

        n = (n * n) % b;
    }

    return r % b;
}

void gen_crm()
{
    lint n, i;

    for (n=2 ; n<=65000 ; n++)
    {
        if (ver[n])
        for (i=2 ; i<=(n-1) ; i++)
        {
            if ( pwr(i,n,n) != i )
            {
                crm[n] = true;
                break;
            }
        }
    }
}

//int ar[] = {561,1105,1729,2465,2821,6601,8911,10585,15841,29341,41041,46657,52633,62745,63973};

int main()
{
    /*freopen("input.txt","r+",stdin);
    freopen("output.txt","w+",stdout);/**/

    //int kase=1, kounter=1;

//    for (cin >> kase ; kase ; kase--)
//    {
//
//    }

    lint n, i;

    sv();
    gen_crm();


    while (cin >> n && n)
    {

        if ( ver[n] && !crm[n] )
        {
            cout << "The number " << n << " is a Carmichael number." << endl;
        } else
        {
            cout << n << " is normal." << endl;
        }
    }

    return 0;
}
