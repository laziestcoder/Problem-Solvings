#include<bits/stdc++.h>
using namespace std;

int mp(int a, int x)
{
    int e,p=1;
    for(e=1; e<=x; e++)
            p=p*a;
    return p;
}
int main ()
{
    int c,t,i,sum,N,j,n,a[15]={0},J;
    scanf("%d",&t);
    for(c=1 ;c <=t; c++)
    {
     scanf("%d",&N);
     n=N;
     j=floor(log10(n))+1;

     J=j;
     while(n!=0)
     {
         int d;
         a[J]=n%10;
         n=n/10;
         J--;
     }
     sum=0;
     for(i=1; i<=j; i++)
     {
         sum+=mp(a[i],j);
     }
     if(N==sum)
     printf("Armstrong\n");
     else
     printf("Not Armstrong\n");
    }


    return 0;
}
