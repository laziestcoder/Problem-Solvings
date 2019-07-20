#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,n,x;
        cin>>a>>b>>c;
        if(a==b)
            cout<<"YES"<<endl;
        else if(c==0)
            cout<<"NO"<<endl;
        else
        {
            n=((b-a)/c)+1;
            x=a+(n-1)*c;


            if(x==b && n>0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }


    return 0;
}
