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
    long long int k[3],d,m,sum=0;
    cin>>k[0]>>d>>k[1]>>k[2];
    m=k[0];
    sort(k,k+3);
    sum+=(k[0]*256);
    m=m-k[0];
    m=min(m,d);
    sum+=(m*32);
    cout<<sum<<endl;
    return 0;

}
