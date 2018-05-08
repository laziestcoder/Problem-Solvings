#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,t,a,b,c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b)
            {
                if(a>c)
                 printf("Case %d: %d\n",i,a);
                else
                printf("Case %d: %d\n",i,c);
            }
        else
        {
            if(b>c)
            printf("Case %d: %d\n",i,b);
            else
                printf("Case %d: %d\n",i,c);
        }
    }
    return 0;
}
