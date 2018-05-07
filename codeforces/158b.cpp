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
    int n,i,a[100005],ans=0,a3=0,a2=0,a1=0;
    cin>>n;
    for(i=0; i<n; i++)
        {
            scanf("%d",a+i);
            if(a[i]==4)
                ans++;
            else if(a[i]==3)
                a3++;
            else if(a[i]==2)
                a2++;
            else if(a[i]==1)
                a1++;
        }
        if(a3>0)
        {
            ans+=a3;
            if(a3>=a1)
                a1=0;
            else
                a1=a1-a3;
        }
        if(a2>0)
        {
            ans+=a2/2;
            a2=a2%2;
            if(2*a2>=a1)
            {
                ans+=a2;
                a1=0;
            }
            else
            {
                ans+=a2;
                a1=a1-2*a2;
            }
        }
        if(a1>0)
        {
            ans+=a1/4;
            if(a1%4!=0)
                ans++;
        }
        cout<<ans<<endl;

        return 0;

}
