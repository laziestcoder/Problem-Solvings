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
    string s;
    int i=0;
    while(1)
    {
        cin>>s;
        //getchar();
        if(s[0]=='#')
            return 0;
        i++;
        cout<<"Case "<<i<<": ";
        if(s == "HELLO")
        {
            cout<<"ENGLISH"<<endl;
            continue;
        }
        if(s=="HOLA")
        {
            cout<<"SPANISH"<<endl;
            continue;
        }
        if(s=="HALLO")
        {
            cout<<"GERMAN"<<endl;
            continue;
        }
        if(s=="BONJOUR")
        {
            cout<<"FRENCH"<<endl;
            continue;
        }
        if(s=="CIAO")
        {
            cout<<"ITALIAN"<<endl;
            continue;
        }
        if(s=="ZDRAVSTVUJTE")
        {
            cout<<"RUSSIAN"<<endl;
            continue;
        }
        else
        {
            cout<<"UNKNOWN"<<endl;

        }
    }
}
