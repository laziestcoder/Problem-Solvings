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
     int n,a=0,d=0;
     cin>>n>>s;
     for(int i=0; i<n; i++)
     {
         if(s[i]=='A')
            a++;
         else
            d++;
     }
     if(a==d)
        cout<<"Friendship"<<endl;
     else if(a>d)
        cout<<"Anton"<<endl;
     else
        cout<<"Danik"<<endl;
     return 0;
 }

