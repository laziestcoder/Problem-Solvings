#include<bits/stdc++.h>

using namespace std;

int main ()
{
    long long int m,n,x,y,t,i;
    while(scanf("%lld",&t)==1)
    {
        if(t==0)
            return 0;

        scanf("%lld%lld",&n,&m);
        for(i=1; i<=t; i++)
        {
            scanf("%lld%lld",&x,&y);

            if(x==n || y==m)
                printf("divisa");
            else if(y> m && x<n )
                printf("NO");
            else if(y>m && x>n)
                printf("NE");
            else if(y<m && x>n)
                printf("SE");
            else if(y<m && x<n)
                printf("SO");


                printf("\n");

        }
    }

}
