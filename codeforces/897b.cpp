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
long long int digit(long long int n)
{
    long long int k = n;
    while(k)
    {
        n=(n*10)+k%10;;
        k/=10;
    }
    return n;
}



int main()
{
    long long int n,k,i,s=0;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        s+=digit(i);
        s%=k;
        //cout<<s<<endl;
    }
    cout<<s<<endl;

    return 0;
}

//42147 412393322

