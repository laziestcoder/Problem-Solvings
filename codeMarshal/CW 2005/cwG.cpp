#include<bits/stdc++.h>
using namespace std;
//string n[100005];
//int n[100005][100005];
int main ()
{
    int t,i,j,x,f=0,a=-1,d=0;

    cin>>t;
    for(j=0; j<t; j++)
    {
        int tt;
        cin>>tt;
        f=0;
        a=-1;
        d=0;
        for(i=1; i<=tt; i++)
        {
            cin>>x;
            if(abs(x-a)==1 && a!=-1)
            f=1;
            else if(abs(x-a)>2 && a!=-1) //|| (abs(x-a)<1 && a!=-1))
            d=1;

            a=x;
        }
        if(f==1 && d==0)
            puts("yes");
        else
            puts("no");
    }
    return 0;
}
