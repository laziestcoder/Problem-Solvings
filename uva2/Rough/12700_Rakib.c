#include<stdio.h>
int main()
{
    int n,i,j,test,b,w,a,t;
    char match[20];
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d",&n);
        b=0;
        w=0;
        a=0;
        t=0;
        for(j=0; j<n; j++)
        {
            match[j]=getchar();
            if(match[j]=='B')
                b++;
            else if(match[j]=='W')
                w++;
            else if(match[j]=='T')
                t++;
            else if(match[j]=='A')
                a++;
        }
        if(b+a==n && a!=0)
            printf("Case %d: BANGLAWASH\n",i);
        else if(w+a==n && a!=n)
            printf("Case %d: WHITEWASH\n",i);
        else if(a==n)
            printf("Case %d: ABANDONED\n",i);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        else if(b<w)
            printf("Case %d: WWW %d - %d\n",i,w,b);
        else if(b==w)
            printf("Case %d: DRAW %d %d\n",i,b,t);
    }
    return 0;
}
