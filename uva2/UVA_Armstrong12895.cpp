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
int mypow(int a,int x)
{
    int prod=1,i;
    for(i=1;i<=x;i++)
        prod*=a;
    return prod;
}
int main()
{
    int x,n,t,sum=0,y,d;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>x;
        n=floor(log10(x))+1;
        y=x;
        while(y!=0)
        {
            d=y%10;
            sum+=mypow(d,n);
            y/=10;
        }
        if(sum==x)
            cout<<"Armstrong"<<endl;
        else
            cout<<"Not Armstrong"<<endl;
    }
    return 0;
}
