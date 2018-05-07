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
string x="",s[55]="";
void fn(int n)
{
    long long int i;
    s[0]="1";
    x="1";
    for(i=1;i<=n;i++)
    {
        s[i]+=x;
        s[i]+=(i+1+'0');
        s[i]+=x;
        x="";
        x+=s[i];
        //cout<<x[i]<<endl;
        //cout<<x<<endl;
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long int n,k;
    cin>>n>>k;
    fn(n);
    cout<<s[n-1][k-1]<<endl;
    return 0;
}
