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
    if(x==0)
        x++;
        x=log10(x);
        printf("%d\n",x+1);
    }

    return 0;
}
