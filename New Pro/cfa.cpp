#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    if(n>=7)

        {
            if((n%7)>5)
            cout<<2*(n/7)+1<<" ";
            else
            cout<<2*(n/7)<<" ";

            if( (n%7) >2 )
             cout<<2*(n/7)+2;
            else
            cout <<(2*(n/7))+(n%7);

        }
    else if(n<7)
        {
            cout<<n/6<<" ";
            if(n<=2)
                cout<<n;
            else
            cout<<2;
        }
        cout<<endl;

        return 0;
}
