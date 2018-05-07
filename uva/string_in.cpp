/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
//#include<stdio.h>

using namespace std;

int main ()
{
    string s,u;

    while(1){
            cin>>s;
            //scanf("%s",&s);
            //printf("%s",s);
            if(s[0]=='#')
                return 0;
    int i,l;
    u="";
    l=s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            u+=s[i]-'a'+'A';
        else
            u+=s[i]-'A'+'a';
    }
    cout<<u<<endl;

    }
    return 0;
}
