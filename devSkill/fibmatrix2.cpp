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

long long fibonacci(int n)
{
    long long fib[2][2]= {{1,1},{1,0}},ret[2][2]= {{1,0},{0,1}},tmp[2][2]= {{0,0},{0,0}};
    int i,j,k;
    while(n)
    {
        if(n&1)
        {
            memset(tmp,0,sizeof tmp);
            for(i=0; i<2; i++) for(j=0; j<2; j++) for(k=0; k<2; k++)
                        tmp[i][j]=(tmp[i][j]%10+ret[i][k]%10*fib[k][j]%10)%10;
            for(i=0; i<2; i++) for(j=0; j<2; j++) ret[i][j]=tmp[i][j]%10;
        }
        memset(tmp,0,sizeof tmp);
        for(i=0; i<2; i++) for(j=0; j<2; j++) for(k=0; k<2; k++)
                    tmp[i][j]=(tmp[i][j]%10+fib[i][k]%10*fib[k][j]%10)%10;
        for(i=0; i<2; i++) for(j=0; j<2; j++) fib[i][j]=tmp[i][j];
        n/=2;
    }
    return (ret[0][1]);
}
int main ()
{
    long long int t,i,n;
  // while(1){
        cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        printf("Case %lld: %lld is the last digit.\n",i,fibonacci(n));

    }
  // }
    return 0;
}
