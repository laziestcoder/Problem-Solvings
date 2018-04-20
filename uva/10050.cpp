/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>

int main ()

{
    int q[3655]={0},t,l,j,n,p,i,s,x;
    scanf("%d",&t);
    for(l=1; l<=t; l++)
    {
        s=0;
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            q[j]=0;
        }
        scanf("%d",&p);
            for(i=1; i<=p; i++)
            {
                scanf("%d",&x);
                for(j=x; j<=n; j=j+x )
                {
                    if(j%7==6 || j%7==0 )
                        continue;
                    else
                        q[j]=1;
                }
            }
            s=0;
            for(j=1; j<=n; j++)
            {
                s=s+q[j];
            }

            printf("%d\n",s);

    }
    return 0;
}
