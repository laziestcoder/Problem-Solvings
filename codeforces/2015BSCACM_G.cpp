#include<bits/stdc++.h>
using namespace std;
int main ()
{
    while(1){
    int n,x,m,i;
    string s,c;
    cin>>n>>x;
    cin>>s;
    cin>>m;
    cin>>c;
    x=x-1;
    cout<<s[x];
    for(i=0 ; i<m; i++)
    {
        if(c[i]=='R')
        {
            x++;
            cout<<s[x];
        }
        else if(c[i]=='L')
        {
            x--;
            cout<<s[x];
        }
    }
    cout<<endl;
   }
    return 0;
}
