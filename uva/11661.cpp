/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int l,cn,mx,c,i,f1,f2;
    string s;
    while(1)
    {
        cin>> l;
        if(l==0)
            return 0;
        cin>>s;
        cn=0;
        c=0;
        mx=2000000005;
        f1=0;
        f2=0;
        for(i=0; i<l; i++)
        {
            if(s[i]=='D')
            {
D:
                while(i<l)
                {
                    i++;
                    cn++;

                    if(s[i]=='R')
                    {
                        if(mx>cn)
                            mx=cn;

                        f1=1;
                        cn=0;
                        goto R;
                    }
                    else if(s[i]=='Z')
                    {
                        mx=0;
                        break;
                    }
                    else if(s[i]=='D')
                    {
                        cn=0;
                    }

                }
            }


            else if(s[i]=='R')
            {
R:
                while(i<l)
                {
                    i++;
                    c++;

                    if(s[i]=='D')
                    {
                        if(mx>c)
                            mx=c;

                        f2=1;
                        c=0;
                        goto D;
                    }
                    else if(s[i]=='Z')
                    {
                        mx=0;
                        break;
                    }
                    else if(s[i]=='R')
                    {
                        c=0;
                    }

                }
            }


            else if(s[i]=='Z')
            {
                mx=0;
                break;
            }

        }
        if(f1==1 || f2==1)
            cout<< mx<<endl;
        else
            cout<<0<<endl;
    }

    return 0;

}
