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
    //freopen("input.txt","w",stdout);
    double l,f,d,car,buy;
    int i,k,m,p;
    while(scanf("%d%lf%lf%d",&m,&f,&l,&k)!=EOF)
    {
        double mn[102]={-1.00};
        if(m<0)
            return 0;
        for(i=0;i<k;i++)
        {
            scanf("%d%lf",&p,&d);
            mn[p]=d;
            //cout<<p<<" "<<d<<" " <<mn[p]<<endl;
        }
        car=f+l;
        f=l/m;
        buy=l;
        i=1;
        //cout<<i-1<<" "<<mn[i-1]<<endl;
        //cout<<i<<" "<<car<<" " <<buy<<endl;
        car=car-(car*mn[0]);
        d=mn[0];
        //cout<<i<<" "<<car<<" " <<buy<<endl;
        while(buy>=car)
        {
            if(mn[i]==0)
            {
                //cout<<"d "<<d<<endl;
                mn[i]=d;
            }
            //cout<<i<<" "<<mn[i]<<endl;
            //cout<<i<<" "<<car<<" " <<buy<<endl;
            buy-=f;
            car=car-car*mn[i];
            d=mn[i];
            i++;
            if(i>m || abs(buy-car)<=0)
                break;
        }
        //cout<<i<<" "<<mn[i]<<endl;
    //cout<<i<<" "<<car<<" " <<buy<<endl;
       i--;
        if(i==1)
            printf("%d month\n",i);
        else
            printf("%d months\n",i);
    }
    return 0;
}
