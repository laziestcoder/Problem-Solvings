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
    long long int n,i;
    string s;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
            i=0;
        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }
        while(n)
        {
            s[i]=(n%3)+'0';
            n=n/3;
            i++;
        }
        for(i=i-1; i>=0; i--)
        cout<<s[i];
        cout<<endl;
    }
    return 0;
}
