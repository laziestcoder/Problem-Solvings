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
    int A[20]={0},B[20]={0};

    unsigned long long int a,b,i,j,l,k,s,c=0,w,x,m;
    while(scanf("%llu%llu",&w,&x)==2)
    {
        if(w==0 && x==0)
            return 0;
        if(x>w)
        {
            a=x;
            b=w;
        }
        else
        {
            a=w;
            b=x;
        }

        for(i=1; a!=0; i++)
        {
            A[i]=a%10;
            a=a/10;

        }
        for(j=1 ;  b!=0   ; j++)
        {
            B[j]=b%10;
            b=b/10;
        }
        k=1;
        l=1;
        m=0;
        while(k<=i)
        {
            if(c==0)
            {
                s=A[k]+B[l];
                A[k]=0;
                B[l]=0;
            }
            else
            {
                s=A[k]+B[l]+1;
                A[k]=0;
                B[l]=0;
            }
            c=0;
            if(s>9)
            {
                c=1;
                m=m+c;
            }
            k++;
            l++;
            s=0;
        }

        if(m==0)
            printf("No carry operation.\n");
        else if(m==1)
            printf("1 carry operation.\n");
        else
            printf("%llu carry operations.\n",m);
    }
    return 0;
}
