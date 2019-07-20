#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char s[105];
    cin>>s;
    long long int l=0,i=0,mx=0,d=0;
    l=0;
    for(i=0; i<strlen(s); i++)
    {
        if( s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ||s[i]=='Y' )
        {
            l++;
            mx=max(mx,l);
            l=0;
        }
        else
            l++;
    }
    if(l>=mx)
        mx=l+1;
    cout<<mx<<endl;
    return 0;
}
