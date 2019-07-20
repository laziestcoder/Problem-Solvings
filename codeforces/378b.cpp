#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,m=0,mx=0,i=0,sl=0,sr=0,l[100005]={0},r[100005]={0},lp,rp;
    cin>>n;
    while(1)
    {
        cin>>l[i]>>r[i];
        sl+=l[i];
        sr+=r[i];
        i++;
        if(n==i)
            break;
    }

    for(i=0; i<n; i++)
    {
        lp=sl-l[i]+r[i];
        rp=sr-r[i]+l[i];

        if(abs(lp-rp)-abs(sl-sr) > mx)
        {
            mx=abs(lp-rp)-abs(sl-sr);
            m=i+1;
        }

    }


    /*if(abs(sl-sr) <= abs((sl-lp+rp)-(sr-rp+lp)))
    cout<<m<<endl;
    else*/
    cout<<m<<endl;
    return 0;
}
/***

3
5 6
8 9
10 3

3

2
6 5
5 6

1/2


6
5 9
1 3
4 8
4 5
23 54
12 32

0
***/
