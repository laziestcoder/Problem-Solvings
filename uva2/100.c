/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
int cycle(int n)
{
    int x=1;
    while(1)
    {
        if(n==1)
            break;
        else
        {
            if(n%2==0)
                n=n/2;
            else
                n=3*n+1;
            x++;
        }
    }
    return(x);
}
int main()
{
    int i,j,a,b,c,max;

    while(scanf("%d%d",&i,&j)==2)
    {
        if(i<j)
        {
            a=i;
            b=j;
            max=0;
            for(a; a<=b; a++)
            {
                c=cycle(a);
                if(c>max)
                    max=c;
                        printf("%d %d\n",a,max);
            }
            printf("%d %d %d\n",i,j,max);
        }
        else
        {
            b=i;
            a=j;
            max=0;
            for(b; b>=a; b--)
            {
                c=cycle(b);
                if(c>max)
                    max=c;
                      printf("%d %d\n",b,max);
            }
            printf("%d %d %d\n",i,j,max);
        }
    }
    return 0;
}
