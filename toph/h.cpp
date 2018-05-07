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

#define mod 1000000007

long long int fibonacci(long long int n)
{
    long long fib[2][2]= {{1,1},{1,0}},ret[2][2]= {{1,0},{0,1}},tmp[2][2]= {{0,0},{0,0}};
    int i,j,k;
    while(n)
    {
        if(n&1)
        {
            memset(tmp,0,sizeof tmp);
            for(i=0; i<2; i++) for(j=0; j<2; j++) for(k=0; k<2; k++)
                        tmp[i][j]=(tmp[i][j]%mod+ret[i][k]%mod*fib[k][j]%mod)%mod;
            for(i=0; i<2; i++) for(j=0; j<2; j++) ret[i][j]=(tmp[i][j]+)%mod;
        }
        memset(tmp,0,sizeof tmp);
        for(i=0; i<2; i++) for(j=0; j<2; j++) for(k=0; k<2; k++)
                    tmp[i][j]=(tmp[i][j]%mod+fib[i][k]%mod*fib[k][j]%mod)%mod;
        for(i=0; i<2; i++) for(j=0; j<2; j++) fib[i][j]=tmp[i][j];
        n/=2;
    }
    return (ret[0][1]);
}
int main ()

{
    long long int n,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
      // if(n<=2)
      // printf("Case %lld: %lld\n",i,((fibonacci(n+1)*8)%mod));
      // else
         printf("Case %lld: %lld\n",i,fibonacci(n));
    }
    return 0;
}
