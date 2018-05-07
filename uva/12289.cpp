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
    int n;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s.length()==5)
            cout<<3<<endl;
        else
        {
            if((s[0]=='o'||s[1]=='n' || s[2]== 'e' ) && (s[0]!= 't' && s[1]!= 'w' && s[0]!= 'w' && s[1]!= 't' && s[2]!= 't' && s[2]!= 'w' ))
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
}
