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


long long int fact(int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
    return fact(n-1)*n;
}

int main ()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if (n < 0)       /** tricky point . For Negative value **/
        {
            if (n % 2 == 0)
                printf("Underflow!\n");
            else
                printf("Overflow!\n");
            continue;
        }
        else if(n<8)
            printf("Underflow!\n");
        else if (n>13)
            printf("Overflow!\n");
        else
            printf("%lld\n",fact(n));
    }
}

/****string  call (string a , int n)
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
            if(sb<8)
                cout<<"Underflow!\n";
            else if(sb>13)
                cout<<"Overflow!\n";
            else
            cout<<a[sb]<<endl ;
        }

     return 0 ;
 }*****/
