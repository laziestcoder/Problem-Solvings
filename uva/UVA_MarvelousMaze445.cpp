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
int main()
{
    char s[1000];
    int x,i,j,l;
    while(gets(s))
    {
        x=0;
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(!(s[i]>='A' && s[i]<='Z' || s[i]=='b' || s[i]=='*' || s[i]=='*'))
                x+=s[i]-'0';
            if(s[i]=='!')
            {
                cout<<endl;
                x=0;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                for(j=1; j<=x; j++)
                    cout<<s[i];
                x=0;
            }
            else if(s[i]=='b')
            {
                for(j=1; j<=x; j++)
                    cout<<" ";
                x=0;
            }
            else if(s[i]=='*')
            {
                for(j=1; j<=x; j++)
                    cout<<"*";
                x=0;
            }
        }
        cout<<endl;
    }
    return 0;
}
