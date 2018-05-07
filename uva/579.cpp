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
    int h,m;
    double ans,hh,mm;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(scanf("%d:%d",&h,&m)!=EOF)
    {
        if(h==0 && m==0)
            return 0;
        hh=h*30.0;
        mm=m*6.0;
        if(m>0)
        {
            hh+=(m*.50);
        }
       // cout<<hh<<endl;
        //cout<<mm<<endl;
        hh=fabs(hh-mm);
        hh=min(fabs(360-hh),hh);
       // cout<<hh<<endl;
        ans=hh;
        while(ans>180)
        {
            ans=fabs(180-ans);
        }
        printf("%.3lf\n",ans);
    }
    return 0;
}
