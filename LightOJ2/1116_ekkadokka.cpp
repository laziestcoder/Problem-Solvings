#include<bits/stdc++.h>
using namespace std;

#define M 10000000000000000000
bool marked[M];

void sieve2(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (marked[i] == false)   // i is a prime
        {
            for (int j = i + i; j <= n; j += i)
            {
                marked[j] = true;
            }
        }
    }
}


int div(long long int n)
{

}

int main ()
{
    sieve2(10000000000000000000);
    int t,i=0;
    cin>>t;
    while(t--)
    {
        i++;
        long long int n;
        cin>>n;


    if(!marked[n])
            printf("Case %d: Impossible\n",i);
    }
    return 0;
}
