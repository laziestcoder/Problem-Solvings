#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,m=0,mx=0,i=0,sl=0,sr=0,lp,rp,l,r;
    cin>>n;
    while(1)
    {
        i++;
        cin>>l>>r;
        sl+=l;
        sr+=r;
        if(mx<abs(l-r)&& l-r > 0)
        {
            mx=l-r;
            m=i;
            lp=l;
            rp=r;
        }
        if(i==n)
            break;
    }
    if(abs(sl-sr) < abs((sl-lp+rp)-(sr-rp+lp)))
    cout<<m<<endl;
    else
        cout<<0<<endl;
    return 0;
}
