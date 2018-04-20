/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>

int main()
{
    int n,i,j,k,t,a,m;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        a=n-1;
        m=1;
        printf("Case %d: \n",k);
        for(i=1;i<=n;i++)
        {

            for(j=1;j<=(a+m);j++)
            {
                if(j<=a) printf(" ");
                else printf("*");
            }
            a--;
            m=2*i+1;
            printf("\n");
        }
    }
    return 0;
}
