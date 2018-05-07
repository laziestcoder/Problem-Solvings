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
 int main ()
 {
     long long int k,x,r;
     scanf("%lld %lld",&k,&r);
     for(x=1; ;x++)
     {

         if((x*k)%10 == r || (x*k)%10 == 0)
            {
                cout<<x<<endl; return 0;
            }
     }
     return 0;
 }
