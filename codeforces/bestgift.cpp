#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,i,a[11]={0},co,j;
    cin >>n >>m;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    co=0;
    for(i=0 ; i<n-1 ;i++)
    {
        for(j=i+1; j<n;j++)
         {
             if(a[i]!=a[j])
               co++;
         }
    }
      cout <<co<<"\n" ;

    return 0;
}
