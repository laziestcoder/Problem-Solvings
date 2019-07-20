/******** rank 1 ***********/

#include <bits/stdc++.h>
using namespace  std ;

string  call (string a , int n)
{
    reverse(a.begin() , a.end()) ;
    string b ;
    int  i  , carry =0 ;
    for (i=0 ; i<a.size() ; i++)
    {
        int x=(a[i]-'0')*n+carry ;
        b+=(x%10)+'0' ;
        carry=x/10 ;

    }
    while (carry>0)
    {
        b+=(carry%10)+'0' ;
        carry/=10 ;
    }
    reverse(b.begin(),b.end()) ;

    return b ;
}

int main ()
 {
    string  a[1090] ;

       a[0]="1" ;
       a[1]="1" ;
        for (int  i =2 ; i<=1050 ; i++)
        {
            a[i]= call (a[i-1],i) ;
        }

        int sb ;
        while (cin>>sb)
        {
            cout<<sb<<"!\n"<<a[sb]<<endl ;
        }

     return 0 ;
 }
