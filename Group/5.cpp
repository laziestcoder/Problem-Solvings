#include<cstdio>
using namespace std;
int main ()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n,x=0,sum=0;
        scanf("%d",&n);
        while(1)
        {
            int s=0;
            scanf("%d",&s);
            if(s==0)
                x++;
            if(n==x)
                break;

            sum+=s;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
