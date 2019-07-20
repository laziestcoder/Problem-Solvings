Derived the expression N – (X^3 – Y^3) = 0
Then made a table of all the cubes till MAX_INT which is defined in LIMITS.H
You must use long long for the results. Because even though the required numbers are from Integer range but the cubes might not be from that range.

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

#define MI INT_MAX

#define ULONG unsigned long long

#define LLONG long long

#define swap(a,b) {int t=a ; a=b ; b=t; }

#define sz(a) sizeof(a)

#define FOR(i, a, b) for (i=a ; i<b ; i++)

#define QSORT(a,n,s,f) qsort(a,n,sizeof(s),f)

using namespace std;



int cube[100000];



int main()

{

    int i, j, lim;

    int found;

    LLONG miny, minx, x, y, n;

    for (LLONG x=0, i=0 ; x*x*x<=MI ; x++, i++)

    {

        cube[i]=x*x*x;

        lim = i;

    }

    //cout << ++lim << endl;



    while (cin >> n && n)

    {

        miny = minx = MI + 1;

        for (i=1, found=false ; i<lim && !found ; i++)

        {

            for (j=lim-1 ; j>=1 && !found ; j--)

            {

                if ((cube[j]-cube[i])==n && i!=j)

                {

                    found++;

                    x = j;

                    y = i;



                }

                if (found>1)

                {

                    if (miny>y)

                    {

                        miny=y;

                        minx=x;

                    }

                } else

                {

                    miny = y;

                    minx = x;

                }

            }

        }

        if (found)

        {

            cout << minx << " " << miny << endl;

        } else {

            printf("No solution\n");

        }

    }

    return 0;

}

