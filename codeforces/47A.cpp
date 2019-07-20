#include<bits/stdc++.h>
using namespace std;
int main ()
{
   // while(1){
        int n,m;
        cin>>n>>m;
        if((n>=2 && m>=1) || (n>=1 && m>=2))
        cout<<(n*m)/2<<endl;
        else
            cout<<0<<endl;
   // }
    return 0;
}
