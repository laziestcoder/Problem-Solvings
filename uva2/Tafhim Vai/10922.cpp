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



int degFinder(char *a)

{

    int i, sum, deg=0, presum=-1;





    do {

        sum=0;

        for (i=0 ; a[i] ; i++)

        {

            sum+=(a[i]-'0');

        }



        //printf("--> %d\n",sum);



        if (sum==presum)

            return deg;

        if ((sum%9)==0)

        {

            deg++;



            sprintf(a,"%d",sum);

            presum=sum;

        }

        else

        {

            return deg;

        }

    } while (1);

    return deg;

}

char inp[10000], pro[10000];

int main()

{

    int print;

    while (gets(inp))

    {

        if (!strcmp(inp,"0"))

            break;

        else

        {

            strcpy(pro,inp);

            print = degFinder(pro);

            if (print)

            {

                printf("%s is a multiple of 9 and has 9-degree %d.\n",inp,print);

            }

            else

            {

                printf("%s is not a multiple of 9.\n",inp);

            }

        }

    }

    return 0;

}
