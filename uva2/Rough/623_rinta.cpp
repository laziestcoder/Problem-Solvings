/********* rank 17 *********/
#include<stdio.h>
#include<string.h>
char f[10000];
char factorial[1010][10000];

void multiply(int k)
{
    int ci,sum,i,j;
    int len = strlen(f);
    ci=0;
    i=0;
    while(i<len)
    {
        sum=ci+(f[i] - '0') * k;
        f[i] = (sum % 10) + '0';
        i++;
        ci = sum/10;
    }
    while(ci>0)
    {
        f[i++] = (ci%10) + '0';
        ci/=10;
    }

    for(j=0; j<i; j++)
        factorial[k][j]=f[j];
}

void fac()
{
    int k;
    strcpy(f,"1");
    for(k=2; k<=1000; k++)
        multiply(k);
}

void print(int n)
{
    int i;
    int len = strlen(factorial[n]);
    printf("%d!\n",n);
    for(i=len-1; i>=0; i--)
    {
        printf("%c",factorial[n][i]);
    }
    printf("\n");
}

int main()
{
    int n;
    factorial[0][0]='1';
    factorial[1][0]='1';
    fac();
    while(scanf("%d",&n)==1)
    {
        print(n);
    }
    return 0;
}
