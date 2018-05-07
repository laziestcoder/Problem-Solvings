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
    string s,ss;
    cin>>s>>ss;
    int sm=0,ssm=0,i;
    for(i=0; i<s.size(); i++)
    {
        sm=0;
        ssm=0;
        if(s[i]>='a' && s[i]<='z')
            sm+=s[i]-'a';
        else if(s[i]>='A' && s[i]<='Z')
            sm+=s[i]-'A';
        if(ss[i]>='a' && ss[i]<='z')
            ssm+=ss[i]-'a';
        else if(ss[i]>='A' && ss[i]<='Z')
            ssm+=ss[i]-'A';
        if(sm==ssm)
            continue;
        else if(sm>ssm)
        {
            cout<<1<<endl;
            return 0;
        }
        else
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<0<<endl;


    return 0;
}
