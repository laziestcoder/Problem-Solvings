#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int x,count,t,i,n,j,n1;
    char a[101],b[101],a1[101],b1[101];
    scanf("%d",&t);
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);
            gets(a);
            n1=strlen(a);
            for(i=1;i<=n1;i++)
            a1[i]=a[i-'0'];
            for(i=1;i<=n1;i++)
            printf("%c",a1[i]);

        }
        for(j=0;j<n;j++)
            printf("%d %c\n",j,a[j]);

        count=0;
        for(j=1; j<=n; j++)
        {
            x=a[j]-'0';
            while(x!=b[j])
            {
                printf("%d",x);
                x++;
                count++;
            }

            printf("steps %d\n",count);
        }
    }

    return 0;
}

