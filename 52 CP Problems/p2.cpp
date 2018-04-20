#include<iostream>
#include<cstdio>

using namespace std;
int main ()
{
    int t,n,p=0,e=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        if(n>0)
            p++;
        else if(n<0)
            e++;
    }
    printf("%d %d\n",p,e);
    return 0;
}
