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
    int t,x,i,y,xx,yy;
    while(scanf("%d",&t)==1)
    {
        if(t==0)
            break;
        cin>>x>>y;

        for(i=0; i<t; i++)
        {
            cin>>xx>>yy;
            if(xx==x || yy==y)
                cout<<"divisa"<<endl;
            else if(xx>x && yy>y)
                cout<<"NE"<<endl;
            else if(xx<x && yy>y)
                cout<<"NO"<<endl;
            else if(xx>x && yy<y)
                cout<<"SE"<<endl;
            else
                cout<<"SO"<<endl;
        }

    }
    return 0;

}
