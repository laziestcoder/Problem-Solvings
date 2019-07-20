#include<bits/stdc++.h>

using namespace std;
int main ()
{
    int n,m,i,d;
    while(1){
            cin>>n>>m;
        if(m==0)
         break;
    for(i=n; i<=m; i++)
    {
        d=sqrt((i*i*i)*2);
        cout<<i*i*i<<" "<<((i*i*i)*2)<<" "<<d<<" "<<d*d<<endl;
    }
    }
    return 0;
}
