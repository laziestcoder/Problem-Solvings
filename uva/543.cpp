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

#define M 100000000
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
    sieve(999998);
    int n,mn,mx,i,j,sum;
    while(cin>>n && n)
    {

        sum=-1;
        for(i=2; i<=n/2; i++)
        {
            //cout<<i<<" "<<marked[i]<<" "<<marked[n-i]<<endl;
            if((!marked[i]) && (!marked[n-i]) && (sum<(abs(n-i-i))))
            {
                sum=abs(n-i-i);
                mn=i;
                mx=n-i;
                break;
            }
        }
        printf("%d = %d + %d\n",n,mn,mx);

    }

    return 0;
}
