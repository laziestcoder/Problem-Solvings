#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int l,h,r,n[100005]= {0},j,mx=0;
    while(scanf("%d%d%d",&l,&h,&r)!=EOF)
    {
        for(j=l; j<r; j++)
        {
            if(n[j]<h)
            {
                n[j]=h;
            }

        }
        if(mx<r)
            mx=r;

    }
    for(j=1; j<mx; j++)
    {

        if(n[j]!=n[j-1])
        {
            cout<< j <<" " << n[j] <<" ";
        }
    }
    cout<< mx<<" 0\n";
    return 0;

}
