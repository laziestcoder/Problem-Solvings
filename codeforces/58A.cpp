#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    string s;
    cin>>s;
    bool h = false,e = false,l =false, o = false;
    for(int i=0; i<s[i]; i++)
    {
        h = false;
        if(s[i]=='h')
        {
            h = true;
one:
            e = false;
            i++;
            if(s[i]=='e')
            {
                e = true;
two:
                l = false;
                i++;
                if(s[i]=='l')
                {
                    l = true;
                    o = false;
                    i++;
                    if(s[i]=='o')
                    {
                        o = true;
                        break;
                    }
                    else
                    {
                        goto two;
                    }
                }
                else
                {
                    goto one;
                }
            }
        }
    }
    if(h && e && l && o)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
