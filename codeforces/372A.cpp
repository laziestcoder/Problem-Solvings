#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
     long long int n,a,c,s=0,x=0;
     cin>>n>>c;
     if(n==1)
     {
         cout<<1<<endl;
         return 0;
     }
     //s=a;
     //n--;
     while(n--)
     {
         cin>>a;
         if(a-s<=c)
            x++;
         else
            x=1;
        s=a;
     }
     printf("%lld",x);

     return 0;
 }
