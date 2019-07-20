/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
    int m,i,n;
    double t;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&m);
        if(m<=180000)
            printf("Case %d: 0\n",i);
        else if(m>180000 && m<=480000)
        {
            t=((m-180000)*.1);
            if(t>0&&t<=2000)
                printf("Case %d: 2000\n",i);
            else
                printf("Case %d: %.0f\n",i,ceil(t));
        }
        else if(m>480000 && m<=880000)
        {
            t=((m-480000)*.15)+(300000*.1);
            printf("Case %d: %.0f\n",i,ceil(t));
        }
        else if(m>880000 && m<=1180000)
        {
            t=((m-880000)*.2)+(400000*.15)+(300000*.1);
            printf("Case %d: %.0f\n",i,ceil(t));
        }
        else
        {
            t=((m-1180000)*.25)+(300000*.2)+(400000*.15)+(300000*.1);
            printf("Case %d: %.0f\n",i,ceil(t));
        }
    }
    return 0;
}
