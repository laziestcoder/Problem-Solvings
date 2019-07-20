#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,e,f,c;
    cin>>n;
    while(n--)
    {
        cin>>e>>f>>c;
        int s=e+f,sum=0,cn=0;
        while(s>=c)
        {
            sum+=s/c;
            s=(s%c)+(s/c);
        }
        cout<<sum<<endl;
    }
    return 0;
}
