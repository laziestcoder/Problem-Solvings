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

    int c=0,i,j,l;
    char s[1000000];
    while(gets(s))
    {
        c=0;
        l=strlen(s);
        for(i=0 ; i<l ; i++)
        {
           if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                c++;
                while(1)
                {
                    ++i;
                    if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') )
                        continue;
                    else
                        break;
                }
            }
            else
                continue;
        }
        cout <<c << "\n";
    }
    return 0;
}
