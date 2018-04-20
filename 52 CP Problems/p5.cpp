#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int t;
    char c[4];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",c);
        printf("%d\n",c[0]+c[1]+c[2]);
    }
    return 0;
}
