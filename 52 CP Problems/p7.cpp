#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int t,n,i,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        k=0;
        for(i=0;i*i<=n;i++)
        {
            if(i*i == n)
            {
                k=1;
                printf("YES\n");
                break;
            }
        }
        if(k == 0)
            printf("NO\n");
    }
    return 0;
}

