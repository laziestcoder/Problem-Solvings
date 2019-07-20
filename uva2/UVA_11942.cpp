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
    int a[100],i,j,n,f,g;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=10; j++)
            cin>>a[j];

        if(a[1]<a[2])
        {
            for(j=2; j<=9; j++)
            {
                if(a[j]<a[j+1])
                {
                    f=0;
                }
                else
                {
                    f=1;
                    cout<<"Unordered"<<endl;
                    break;
                }
            }
            if(f==0)
                cout<<"Ordered"<<endl;
        }
        else
        {
            g=0;
            for(j=2; j<=9; j++)
            {
                if(a[j]>=a[j+1])
                    g=0;
                else
                {
                    g=1;
                    cout<<"Unordered"<<endl;
                    break;
                }
            }
            if(g==0)
                cout<<"Ordered"<<endl;
        }
    }
    return 0;
}


