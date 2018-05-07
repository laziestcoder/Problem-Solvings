/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
 {
     string a,b;
     int i;
     cin>>a>>b;
     for(i=0;i<a.size();i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
     }
     cout<<a.compare(b)<<endl;
     return 0;
 }
