#include<cstdio>
#include<math.h>
using namespace std;
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        int j=1;
        while(1)
        {
            int n;
            n=j;
            n=n*(n+1);
            n=n/2;
            if(n >= x )
                break;
            j++;
        }
        if(x>0)
        printf("%d\n",j);
        else
            printf("0\n");
    }
    return 0;
}
