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
    int a[10],b[10],i,f;
    while(scanf("%d",&a[0])==1)
    {
        for(i=1; i<5; i++)
            cin>>a[i];
        for(i=0; i<5; i++)
            cin>>b[i];
        f=0;
        for(i=0; i<5; i++)
        {
            if(a[i]==b[i])
            {
                f=1;
                cout<<"N"<<endl;
                break;
            }

        }
        if(f==0)
            cout<<"Y"<<endl;
    }
    return 0;
}
