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

char s[10];

int digSum(int n)

{

    int i, sum=0;

    sprintf(s,"%d",n);

    for (i=0 ; s[i] ; i++)

    {

        sum+=(s[i]-'0');

    }

    return sum;

}



bool ver[1000001]={false};



void selfer()

{

    int i, j;



    for (i=1 ; i<=1000000 ; i++)

    {

        if (!ver[i])

        {

            printf("%d\n",i);

            for (j=i+digSum(i) ; j<=1000000 ; j+=digSum(j))

            {



                if (ver[j])

                    break;

                ver[j]=true;

            }

        }

    }

}



int main()

{

    int i;



    selfer();

    return 0;

}
