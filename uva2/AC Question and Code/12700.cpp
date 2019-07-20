#include<stdio.h>
#include<string.h>

int main ()
{
    int t,i,j,n,B,A,W,T;
    char in[15];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        scanf("%s",in);

        j=strlen(in);
        B=0; A=0; W=0; T=0;
        for(j=0; j<n; j++)
        {
            if(in[j]=='B')
                B++;
            else if(in[j]=='W')
                W++;
            else if(in[j]=='T')
                T++;
            else if(in[j]=='A')
                A++;
        }

        if(B>W && W==0 && T==0)
            printf("Case %d: BANGLAWASH",i);
        else if(W>B && B==0 && T==0)
            printf("Case %d: WHITEWASH",i);
        else if(A==n)
            printf("Case %d: ABANDONED",i);
        else if(B==W || T==n)
            printf("Case %d: DRAW %d %d",i,B,T);
        else if(B>W)
            printf("Case %d: BANGLADESH %d - %d",i,B,W);
        else if(W>B)
            printf("Case %d: WWW %d - %d",i,W,B);



        printf("\n");
    }
    return 0;
}
