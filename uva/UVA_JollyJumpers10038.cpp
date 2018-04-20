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
    int a[10000],b[10000],x[10000];
    int l,t,i,j=1,k,n,f;
    while(scanf("%d",&n)==1)
    {
        f=0;
        j=1;
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n-1; i++)
        {
            x[i]=j;
            j++;
        }
        for(i=0;i<n-1;i++)
        {
            b[i]=abs(a[i]-a[i+1]);
        }
        sort(b+0,b+n-1);
        for(i=0;i<n-1;i++)
        {
            if(x[i]!=b[i])
            {
                 f=1;
                cout<<"Not jolly"<<endl;
                break;
            }
        }
        if(f==0)
            cout<<"Jolly"<<endl;
    }
    return 0;
}
