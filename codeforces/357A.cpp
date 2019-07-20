#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,r1,r2,f=0;
    string s;
    cin>>n;
    for(i=1; i <=n ; i++)
    {
        cin>>s>>r1>>r2;
        if(r1>=2400)
        {
            if(r2>r1)
            {
                if(r2>2400)
                    f=1;
            }
        }
    }
    if(f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
