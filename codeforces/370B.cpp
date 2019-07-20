#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int l=0,u=0,r=0,d=0,i=0;
    for(i=0 ; i<s.size(); i++)
    {
        if(s[i]=='L')
        {
            r++;
        }
        else if(s[i]=='D')
        {
            u++;
        }
        else if(s[i]=='U')
        {
            d++;
        }
        else if(s[i]=='R')
        {
            l++;
        }
    }
    /**
    if(l==r && u==d)
        cout<<0<<endl;
    else if(l==r )
    {
        if(u==d)
            cout<<0<<endl;
        else if(abs(u-d)%2==0)
            cout<<abs(u-d)/2<<endl;
        else
            cout<<-1<<endl;
    }
    else if(u==d)
    {
        if(abs(l-r)%2 == 0)
            cout<<abs(l-r)/2<<endl;
        else
            cout<<-1<<endl;
    }
    else
    {
        if(abs(u-d)==abs(u-d))
            cout<<abs(u-d)<<endl;
        else
            cout<<-1<<endl;
    }**/

    if(l)
    return 0;
}
