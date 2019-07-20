/********* rank 6K++ ******/

#include <bits/stdc++.h>
using namespace  std ;

string  fact (string a, int n)
{
    reverse(a.begin(), a.end()) ;
    string b ;
    int  i, carry =0 ;
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
    int sb ,i ;
    while (scanf("%d",&sb)!=EOF)
    {
        string  a[sb+2] ;
        a[0]="1" ;
        a[1]="1" ;
        if(sb>1)
        {
            for (i = 2 ; i<=sb+1 ; i++)
            {
                a[i]= fact (a[i-1],i) ;
            }
        }
        cout<<sb<<"!\n"<<a[sb]<<endl ;
    }
    return 0 ;
}
