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

#define MI INT_MAX

#define ULONG unsigned long long

#define LLONG long long

#define swap(a,b) {int t=a ; a=b ; b=t; }

#define sz(a) sizeof(a)

#define FOR(i, a, b) for (i=a ; i<b ; i++)

#define QSORT(a,n,s,f) qsort(a,n,sizeof(s),f)

using namespace std;



queue<int>list;



int main()

{

    bool comma;

    int n, i, v;



    while (cin>>n && n)

    {



        if (n==1)

        {

            cout << "Discarded cards:" << endl;

            cout << "Remaining card: 1" << endl;

            continue;

        }





        for (i=1 ; i<=n ; i++)

        {

            list.push(i);

        }

        comma=false;







        cout << "Discarded cards: ";

        while (1)

        {

            if (comma)

            {

                cout << ", ";

            }

            else

            {

                comma=true;

            }



            v = list.front();

            list.pop();



            cout << v ;

            if (list.size()==1)

                break;



            v = list.front();

            list.pop();

            list.push(v);

        }

        cout << endl << "Remaining card: " << list.front() << endl;

        while (!list.empty())

        {

            list.pop();

        }

    }

    return 0;

}
