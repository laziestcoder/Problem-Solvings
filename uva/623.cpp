/******* rank 4080 **********/

#include <bits/stdc++.h>
using namespace std;

int p[99999], s=0, c=0,i,n,l,j ;


void fact(int n)
{
    p[0]=1;
    c=0;
    s=1;
    for(l=2; l<=n; l++)
    {
        for(j=0; j<s ; j++)
        {
            c=c+p[j]*l;
            p[j]=c%10;
            c/=10;
        }

        while(c>0)
        {
            p[s]=c%10;
            s++;
            c/=10;
        }
    }
}

int main ()
{
    while( scanf("%d",&n)!= EOF )
    {
        cout<<n<<"!"<<endl;
        m=fact(n);
        for(i=s-1;  i>=0;  i--)
        {
            cout<<p[i];
        }
        cout<<endl;
    }
    return 0;
}


/*********** rank 1

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
 ************/
