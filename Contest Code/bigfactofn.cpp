/**** Problem Link : https://www.hackerrank.com/contests/projecteuler/challenges/euler003/copy-from/6017266  ****/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

#define M 9999999
int pr[M];
bool marked[M];
void sieve2()
{
    long long int i,j;
    for (i = 2; i <=M; i++)
    {
        if (marked[i] == false)   // i is a prime
        {
            for (j = i + i; j <= M; j += i)
            {
                marked[j] = true;
            }
        }
    }
    j=1;
    memset(pr,0,sizeof(pr));
    for(i=2; i<=M; i++)
    {
        if(!marked[i])
        {
            pr[j]=i;
            j++;
        }
    }
}

/****
int marked[M/64 + 2];
#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))

void sieve()
{
    long long int i ,j;
    for (i = 3; i * i < M; i += 2)
    {
        if (!on(i))
        {
            for (j = i * i; j <= M; j += i + i)
            {
                mark(j);
            }
        }
    }
    j=1;
    memset(pr,0,sizeof(pr));
    for(i=2; i<=M;i++)
        {
        if(marked[i])
            {
            pr[j]=i;

           cout<<pr[j]<<"\t";
            j++;

        }

    }
}
***/
int main()
{
    //sieve();
    sieve2();
    long long int i,t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int f=0;
        for(i=2; i<=n; i++)
        {
            if(!marked[i])
            {
                if(n%i==0)
                {
                    if(!marked[n/i])
                    {
                        if(i<(n/i))
                        {
                            if(f<(n/i))
                             f=n/i;
                        }
                        else if(f<i)
                            f=i;
                    }
                    else
                    {
                        if(f<i)
                            f=i;
                    }
                }
            }
        }
        cout<<f<<endl;
    }
    return 0;
}
