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
    int i,k,a[100];
    cin>>s;
    k=-1;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
            {
                k++;
                //cout<<s[i]<<endl;
                a[k]=s[i]-'0';
            }

    }
    sort(a+0,a+k+1);
    cout<<a[0];
    for(i=1;i<=k;i++)
    {
        cout<<"+"<<a[i];
    }
    cout<<endl;
    return 0;
}
