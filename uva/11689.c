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
    int m,n,e,f,c,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&e,&f,&c);
        m=e+f;
        n=0;
          while(m>=c)
        {
                n+=m/c;
                m=m/c+(m%c);
        }
        printf("%d\n",n);
    }
    return 0;
}

