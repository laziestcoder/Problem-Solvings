#include<stdio.h>
int main()
{
    int i,j,k,l=2,m=1,sieve,prime[10000];
    char ch[10000];
    prime[1]=2;
    sieve=2;
    for(i=1; i<=10000; i++)
        {ch[i]='Y';}
    for(i=2; i<=10000; i++)
    {
        for(j=sieve; j<=10000; j+=sieve)
        {
            ch[j]='N';
        }
        for(k=sieve; k<=10000; k++)
        {
            if(ch[k]=='Y')
            {
                sieve=k;
                prime[l]=k;
                l++;
                m++;
                break;
            }
        }
    }
    for(i=1; i<=m; i++)
    {
        printf("%d\n",prime[i]);
    }
    printf("%d",m);
    return 0;
}
