#include<bits/stdc++.h>
using namespace std;
string s;

int brk(int n,int m)
{

}

int main ()
{
    freopen("beadsin.txt","r",stdin);
    freopen("beadsout.txt","w",stdout);
    int n,m=0,mx;
    while(1)
    {
        cin>>n;
        mx=0;
        for(i=0 ; i<n ; i++)
            {
                m=brk(0,i)+brk(n,i+1);
                if(m>mx)
                    mx=m;
            }
    }
    return 0;
}
