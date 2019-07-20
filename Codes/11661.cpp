#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int l,cn,mx,c;
    char s[2000005];
    while(1)
    {
        cin>> l;
        if(l==0)
            return 0;

        for(i=1; i<=l; i++)
        {
            cin>>s[i];
        }
        cn=0;
        mx=0;
        c=0;
        for(i=1;i<=l;i++)
        {
            if(s[i]=='D')
            {
                for(;;)
                {
                    i++;
                    cn++;
                    if(mx>cn)
                        mx=cn;
                    if(s[i]=='R')
                        break;

                }
            }
            else if(s[i]=='R')
            {
                for(;;)
                {
                    i++;
                    c++;
                    if(mx>cn)
                        mx=cn;
                    if(s[i]=='D')
                        break;

                }
            }

        }
    }

    return 0;

}
