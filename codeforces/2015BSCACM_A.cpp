#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string a,b;
   //while(1){
            cin>>a>>b;
     //       cout<<a<<" "<<b<<endl;
    int i,n,d=0;
    for(i=0; i<a.size(); i++)
    {
        n=abs(a[i]-b[i]);
        if( n == 0 && d == 0)
              continue;
        else
        {
            d=1;
            cout<<n;
        }

    }
    if(!d)
        cout<<0;
    cout<<endl;
   //}
    return 0;
}
