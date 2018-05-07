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
     int n,i,t1=0,t2=0,c=0;

     string s;
     cin>>s;
     for(i=0; s[i];i++)
     {
         if(s[i]=='0')
            {
                t1++;
                t2=0;
            }
         else if(s[i]=='1')
            {
                t2++;
                t1=0;
            }
         if(t1/7>0 || t2/7>0)
            c=1;
     }
     if(c)
        cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
     return 0;
 }
