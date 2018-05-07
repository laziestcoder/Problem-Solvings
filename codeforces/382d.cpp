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
bool fn(long long int n)
{
    if(n<=2)
    return true;
    else if(n%2==0)
        return false;
    for(int i=3; i<sqrt(n)+1; i+=2)
        if(n%i==0)
        return false;
    return true;
}

int main ()
{
    long long int n,d,i;
    cin>>n;
    bool f=false;
    f=fn(n);

    if(f)
        cout<<1<<endl;
    else if(n%2==0 || fn(n-2))
        cout<<2<<endl;
        else
            cout<<3<<endl;
    return 0;
}
