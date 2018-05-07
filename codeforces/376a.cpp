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
     string s,ss="abcdefghijklmnopqrstuvwxyz";
     cin>>s;
    //cout<<ss<<endl;
     int i,c=0,ans=0,mn;
     int a=0,b=0,j;
     for(i=0; i<s.size();i++)
     {
         c=0;
         for(j=a;j<26;j++)
         {
            // cout<<ss[j]<<j<<" "<<s[i]<<" "<<i<<endl;
            if(s[i]==ss[j])
                {
                    a=j;
                    break;
                }
            else
                    c++;
            if(j==25)
                j=-1;
          // cout<<"loop 1 "<<j<<endl;
          //  getchar();
         }
         mn=c;
         c=0;
         for(j=b;j>=0; j--)
         {
             if(s[i]==ss[j])
                {
                    b=j;
                    break;
                }
            else
                    c++;

             if(j==0)
                j=26;

          //  cout<<"loop 2 "<<j<<endl;
           // getchar();

         }
         ans+=min(mn,c);
     }
     cout<<ans<<endl;
     return 0;
 }
