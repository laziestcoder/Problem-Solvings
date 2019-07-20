#include<bits/stdc++.h>
using namespace std;
int a[64]={0},sum=0,i;
int parity(long long int n)
{
    int b[64]={0},c=0,l;
    i=0; sum=0;
    while(n)
    {
        b[i]=n%2;
        sum+=n%2;
        n/=2;
        i++;
    }
    for(c=0,l=i-1; c<i;l--, c++)
    {
        a[c]=b[l];
    }
    return sum;
}

int main ()
{
    while(1)
    {
        int j=0;
        long long int n;
        cin>>n;
        if(n==0)
            break;
            parity (n);
      printf("The parity of ");
       for(j=0; j<i; j++ )
        cout<<a[j];
        printf(" is %d (mod 2).\n",parity(n));
}
    return 0;
}

