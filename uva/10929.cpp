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
    while(1)
    {
        cin>>s;
        int i;
        long long sum=0,c;
        for(i=0; i<s.size(); i++)
            {
               c=s[i]-'0';
               if(i%2==0)
                  sum=sum+c;
                else
                  sum=sum-c;
            }
        if(sum==0 && i==1)
            break;
        if(sum%11==0)
            cout<<s<<" is a multiple of 11.\n";
        else
            cout<<s<<" is not a multiple of 11.\n";
    }
    return 0;
}
