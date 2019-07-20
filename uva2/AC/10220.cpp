/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

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

        int sb,sum,j ;
        while (cin>>sb)
        {
            sum=0;
            for(j=0; j<a[sb].length(); j++)
              sum+=a[sb][j]-'0';
            cout<<sum<<endl;
        }

     return 0 ;
 }
