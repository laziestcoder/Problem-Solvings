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
    long long i,q,r,j,a[100],b[100],c,x,y,m,n,k;
    while(scanf("%lld%lld",&x,&y)==2)
    {
        if(x==0 && y==0)
            break;
        else
        {
            for(i=0; x!=0; i++)
            {
                a[i]=x%10;
                x=x/10;
            }
            m=i;
            printf("%lld ",m);
            for(j=0; y!=0; j++)
            {
                b[j]=y%10;
                y=y/10;
            }
            n=j;
            printf("%lld\n",n);
            if(m!=n)
            {
                if(m>n)
                {
                    r=m-n;
                    for(k=0;k<n;k++)
                        printf("%lld",b[k]);
                     while(r!=0)
                     {
                         b[j]=0;
                         r--;
                         printf("%lld",b[k]);
                     }
                     printf("\n");
                     for(k=m-1;k>=n;k--)
                     {
                                b[k]=0;
                               printf("%lld %lld\n",k,b[k]);
                     }
                     for(k=n;k>=0;k--)
                        printf("%lld %lld\n",k,b[k]);
                    c=0;
                    for(i=0; i<m-n; i++)
                    {
                        if(a[m]+b[k]>=10)
                            c++;
                    }
                    if(c==0)
                        printf("No carry operation\n");
                    else if(c==1)
                        printf("%lld carry operation.\n",c);
                    else
                        printf("%lld carry operations.\n",c);
                }

                }

    }
    return 0;
}

}
