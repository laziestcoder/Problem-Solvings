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
    int t,n,i,j,x,y,mile=0,juice=0,taka1,taka2,total=0;
    double result1,result2;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        mile=0;
        juice=0;
        for(j=1; j<=n; j++)
        {
            cin>>x;
            if(x<30)
            {
                 taka1=10;
            }

            else
            {
                result1=x/30;
                if(result1!=0)
                    result1++;
                taka1=10*result1;
            }
            mile+=taka1;

            if(x<60)
                taka2=15;
            else
            {
                 result2=x/60;
                if(result2!=0)
                    result2++;
                taka2=15*result2;
            }
            juice+=taka2;

        }
        if(mile==juice)
            cout<<"Case "<<i<<": Mile Juice "<<mile<<endl;
        else if(mile<juice)
            cout<<"Case "<<i<<": Mile "<<mile<<endl;
        else
            cout<<"Case "<<i<<": Juice "<<juice<<endl;
    }
    return 0;
}

