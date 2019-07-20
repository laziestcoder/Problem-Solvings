#include<cstdio>
using namespace std;
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int sum1=0,sum2=0,n;
        scanf("%d",&n);
        for(int j=0; j<n; j++)
        {
            int a;
            scanf("%d",&a);
            sum1+=a;
            a-=j;
            if(a>0)
                sum2+=a;
        }
        printf("%d\n",sum1-sum2);
    }
    return 0;
}
