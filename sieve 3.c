#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l=2,n,sieve;
    char ch[10000];
    sieve=2;
    for(i=1; i<=10000; i++)
    {
        ch[i]='1';
    }
     for(i=1; i<=10000; i++){
        for(j=; j<=10000; j+=sieve)
        {
            ch[j]='0';
        }
     }
    while(scanf("%d",&n)==1)
    {
        if(ch[n]==1)
            printf("Prime Number.\n");
        else
            printf("Not Prime Number.\n");

    }

    return 0;
}
