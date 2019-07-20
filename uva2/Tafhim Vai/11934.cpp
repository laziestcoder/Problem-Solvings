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

#define MI INT_MAX

#define ULONG unsigned long long

#define LLONG long long

#define swap(a,b) {int t=a ; a=b ; b=t; }

#define sz(a) sizeof(a)

#define FOR(i, a, b) for (i=a ; i<b ; i++)

#define QSORT(a,n,s,f) qsort(a,n,sizeof(s),f)

using namespace std;



LLONG f(int x, int a, int b, int c)

{

    return (LLONG)(a*x*x + b*x + c);

}



int main()

{

    LLONG a, b, c, d, l, count, i;



    while (cin >> a >> b >> c >> d >> l)

    {

        if (!a && !b && !c && !d && !l)

            break;

        count = 0;

        FOR (i, 0, l+1)

        {

            if (!(f(i,a,b,c)%d))

                count++;

        }

        cout << count << endl;

    }

    return 0;

}

