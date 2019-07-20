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
    int t,i=1;
    char s[20];
    while(gets(s))
    {
        if(s[0]=='#')
            break;
        else if(strcmp("HELLO",s)==0)
            cout<<"Case "<<i++<<": "<<"ENGLISH"<<endl;
        else if(strcmp("HOLA",s)==0)
            cout<<"Case "<<i++<<": "<<"SPANISH"<<endl;
        else if(strcmp("HALLO",s)==0)
            cout<<"Case "<<i++<<": "<<"GERMAN"<<endl;
        else if(strcmp("BONJOUR",s)==0)
            cout<<"Case "<<i++<<": "<<"FRENCH"<<endl;
        else if(strcmp("CIAO",s)==0)
            cout<<"Case "<<i++<<": "<<"ITALIAN"<<endl;
        else if(strcmp("ZDRAVSTVUJTE",s)==0)
            cout<<"Case "<<i++<<": "<<"RUSSIAN"<<endl;
        else
            cout<<"Case "<<i++<<": "<<"UNKNOWN"<<endl;
    }
    return 0;
}
