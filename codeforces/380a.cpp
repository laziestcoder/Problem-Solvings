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

#define debug cout<<"came"<<endl

int main ()
{
    freopen("in.txt","r",stdin);
    int n,i;
    cin>>n;
    string s="",ss="";
    cin>>s;

    for(i=0; i<n; i++)
    {
        if(n<3)
            {
                cout<<s<<endl; return 0;
            }

       if(s[i]=='o')
       {
           if(s[i+1]=='g' && s[i+2]=='o')
            i+=2, ss+="***";
           else
            ss+=s[i];
       }
       else if(s[i]=='g')
       {
           if(s[i-1]=='o' && s[i+1]=='o')
            i++;
           else
            ss+=s[i];
       }
        else
            ss+=s[i];
    }

    cout<<ss<<endl;
    return 0;
}


/***
ogo, ogogo, ogogogo
***/
