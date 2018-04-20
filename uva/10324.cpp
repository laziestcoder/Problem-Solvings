/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main ()
{

    char s[1000000];
    int i,t,j,d,e,f,k;
    j=0;
    while(cin>>s)
    {

        if(strlen(s) == 0)
            return 0;
        printf("Case %d:\n",++j);
        int t;
        cin>>t;

        for(i=0; i<t; i++)
        {
             f=0;
            cin>>d>>e;
            if(d==e)
            {
                cout<<"Yes\n";
                f=1;

            }
            else if(d>e)
             {
                 for(k=e; k<d; k++)
                {
                    if(s[k]!=s[k+1])
                    {
                        f=1;
                        cout<<"No\n";
                        break;
                    }
                }
             }
             else if(e>d)
             {
                 for(k=d; k<e; k++)
                {
                    if(s[k]!=s[k+1])
                    {
                        f=1;
                        cout<<"No\n";
                        break;
                    }
                }
             }

            if(f==0)
                cout<<"Yes\n";

        }
    }
    return 0;
}



/********** position 5 time 0.000s

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL long long

#define For(i, a, b) for( int i = (a); i < (b); i++ )
#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define Read(r) freopen(r, "r", stdin)
#define Write(w) freopen(w, "w", stdout)

int dr [] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dc [] = {0, 1, 1, 1, 0, -1, -1, -1};

using namespace std;

char ch [N + 5];
int a [N + 5];

int main ()
{
    int cases = 0;

    while ( gets (ch) ) {

        int len = strlen (ch);

        if ( len == 0 ) break;

        a [0] = ch [0] == '1' ? 1 : 0;

        for ( int i = 1; i < len; i++ )
            a [i] = ch [i] == '1' ? a [i - 1] + 1 : a [i - 1];

        int n; scanf ("%d", &n);
        printf ("Case %d:\n", ++cases);

        while ( n-- ) {
            int p, q; scanf ("%d %d", &p, &q);

            if ( p > q ) swap (p, q);

            if ( ch [p] == '0' && ch [q] == '0' && a [q] - a [p] == 0 ) printf ("Yes\n");
            else if ( ch [p] == '1' && ch [q] == '1' && a [q] - a [p] == q - p ) printf ("Yes\n");
            else printf ("No\n");
        }

        getchar ();
    }
	return 0;
}


*******/
