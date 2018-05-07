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

    while(1)
    {
        double f[1005],sum=0,x=0,y=0,w=0;
        int n,i;
        cin>>n;
        if(n==0)
            return 0;

        for(i=0; i<n;i++)
        {
            scanf("%lf",&f[i]);
            sum+=f[i];
        }
        sum/=n;
        for(i=0; i<n;i++)
        {
            w=(long)((f[i]-sum)*100.00)/100.00;
            if(w>0)
                x+=w;
            else
                y+=w;
        }
        y=y*-1.0;
        printf("$%.2lf\n",x>=y?x:y);
    }
    return 0;
}
