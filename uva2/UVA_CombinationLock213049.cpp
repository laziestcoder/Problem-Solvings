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
int main()
{
    char a[15],b[15];
    int i,j,t,k,n,l1,l2,x,y,sum,count1,count2,sum1,sum2;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        sum1=0;
        sum2=0;
        count1=0;
        count2=0;
        cin>>n;
        for(j=0; j<n; j++)
            cin>>a[j];
        for(j=0; j<n; j++)
            cin>>b[j];
        for(j=0; j<n; j++)
        {
            x=a[j]-'0';
            y=b[j]-'0';
            for(k=x; k!=y; k++)
            {
                count1++;
                if(k==10)
                    k=0;
                sum1+=count1;
            }
        }
        sum2=0;
        for(j=0; j<n; j++)
        {
            x=a[j]-'0';
            y=b[j]-'0';
            for(k=x; k!=y; k--)
            {
                count2++;
                if(k==0)
                    k=10;
                sum2+=count2;
            }
        }
        cout<<sum1<<endl;
        cout<<sum2<<endl;
        if(count1<=count2)
            cout<<"Case "<<i<<": "<<count1<<endl;
        else
            cout<<"Case "<<i<<": "<<count2<<endl;
    }
    return 0;
}
