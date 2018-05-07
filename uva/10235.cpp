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


#define M 1000007
bool marked[M];

void sieve(int n)
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

int main ()
{
    int n;
    //freopen("output.txt","w",stdout);
    sieve(1000007);
    while(scanf("%d",&n)!=EOF)
    {

        if(!marked[n] && n!=1)
        {
            int x=0,i=0,m;
            m=n;
            while(m)
            {
                x=(x*10)+(m%10);
                m=m/10;
            }
            if(!marked[x] && x!=1 && n!=x)
                printf ("%d is emirp.\n",n);
            else
                printf ("%d is prime.\n",n);

        }
        else
            printf ("%d is not prime.\n",n);
    }
    return 0;
}
