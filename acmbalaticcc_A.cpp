#include<bits/stdc++.h>
#include<math.h>
#include<conio.h>
#include<cstdio>

int main ()
{
    long long int i,j,d1,d2,p,d[10005]={},D[10005]= {},R[10005]={},a,b,k,l;
    scanf("%lld%lld",&a,&b);

    for(i=0, l=0, p=0 ; a>0, b>0 ; i++)
    {
        d1=a%10;
        d2=b%10;
        a=a/10;
        b=b/10;
        if(a==0 && b==0 && (d1-d2)==0)
            break;

        else if(i<=10000)
            d[i]=abs(d1-d2);
        else if(i>10000 && l<10000)
        {
            l++;

            D[l]=abs(d1-d2);

        }
        else if(l>=10000 && p<10000)
        {
            p++;
            R[p]=abs(d1-d2);
        }
    }
    if(p>0)
    {
        for(j=p; j>=0; j--)
        {
            if(D[j]==0)
                continue;
            else
                break;
        }

        for(j=j; j>0; j--)
        {
            printf("%lld",D[j]);
        }
    }

    if(l>0)
    {
        for(j=l; j>=0; j--)
        {
            if(D[j]==0)
                continue;
            else
                break;
        }

        for(j=j; j>0; j--)
        {
            printf("%lld",D[j]);
        }
    }
    for(j=i-1; j>=0; j--)
    {
        if(d[j]==0)
            continue;
        else
            break;
    }

    for(j=j; j>=0; j--)
    {
        printf("%lld",d[j]);
    }
    printf("\n");

    return 0;
}
