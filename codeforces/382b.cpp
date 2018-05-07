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
    long long int n,n1,n2;
    cin>>n>>n1>>n2;
    int i,a[n];
    double s1=0.0,s2=0.0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        // cout<<a[i];
    }
    sort(a,a+n);
    int j;
    if(n1>n2)
    {
        for(i=n-1,j=0; j<n2; j++,i--)
           {
              // cout<<i<<endl;
             s1+=a[i];
           // cout<<i<<endl;
           }

        s1=(s1*1.0)/n2;

        for(j=0; j<n1; j++,i--)
            {
             //   cout<<i<<endl;
                s2+=a[i];
           // cout<<i<<endl;
            }

        s2=(s2*1.0)/n1;
    }
    else
    {
        for(j=0,i=n-1; j<n1; j++,i--)
            s1+=a[i];

        s1=(s1*1.0)/n1;
        cout<<s1<<endl;

        for(j=0; j<n2; i--,j++)
            s2+=a[i];

        s2=(s2*1.0)/n2;

    }
    printf("%.7lf\n",s1+s2);
    return 0;
}
