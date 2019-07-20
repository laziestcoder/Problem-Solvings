#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s,d;
    int i,cn=0;
    cin>>s;
    for(i=0; s[i]!='\0' ; i++)
    {
        if( s[i] > 'a' && s[i] <='z')
        {
            s[i]=s[i]-1;
            cn++;
        }
        else
        {
            if(cn)
                break;
        }

    }
    if(!cn)
        s[i-1]='z';


    cout<<s<<endl;
    return 0;
}
