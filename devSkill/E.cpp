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
    int t,i;
    cin>>t;
    for(i=1; i<=t;i++)
    {
        cin>>s;

        int j,k,sum=0;

        for(j=0,k=s.size()-1;j<s.size(); j++,k--)
        {
            if(s[j]!=s[k])
                sum++;
        }
        if(s.size()%2==0)
            sum=sum-1;



        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
