#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,c=0;
    while(1)
    {
        c++;
        cin>>n;
        if(n<0)
            return 0;
        if(n==1 || n==0)
            n=0;
        else
            {
                n=ceil(log2(n));
            }
        cout<<"Case "<<c<<": "<<n<<endl;
    }
    return 0;
}
