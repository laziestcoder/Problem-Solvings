#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int,i,j,a,b[10000],max,y;
    char t[100005];
    cin>>t;
    l=strlen(t);
    for(i=0;i<l;i++)
    {
        cin>>a;
        for(j=0;j<a;j++)
        {
         cin>>b[j];
        }
        max=0;
        for(j=0;j<a;j++)
        {
            y=b[j]*(a-j);
            if(max<=y)
                max=y;
        }
        cout<<"Case "<<i<<": "<<max<<endl;
    }
    return 0;
}
