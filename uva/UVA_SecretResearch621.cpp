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
    int t,i,l;
    char s[10000];
    cin>>t;
    getchar();
    while(t--)
    {
        gets(s);
        l=strlen(s);
        if(strcmp(s,"4")==0 || strcmp(s,"1")==0 || strcmp(s,"78")==0)
            cout<<"+"<<endl;
        else if(s[l-2]=='3' && s[l-1]=='5')
            cout<<"-"<<endl;
        else if(s[0]=='9' && s[l-1]=='4')
        cout<<"*"<<endl;
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
            cout<<"?"<<endl;
    }
    return 0;
}
