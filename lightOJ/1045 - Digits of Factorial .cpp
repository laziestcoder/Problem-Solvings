#include<bits/stdc++.h>
using namespace std;


double f[1000010];

int main ()
{

    int t,k;
    cin>>t;
    for(k=1; k<=1000010; k++)
        f[k]=log((k))+f[k-1];
    for(k=1 ; k<=t; k++)
    {
        long long int n,b;
        scanf("%lld %lld",&n,&b);
        printf("Case %d: %lld\n",k,(long long int)(f[n]/(f[b]-f[b-1]))+1);
    }
    return 0;
}


/******* time limit exits :p ******/

/**** long long int f(long long int n)
{
    if(n==0)
        return 1;
    else
        return f(n-1)*n;
}



/*int main ()
{
    int t,k;
    cin>>t;
    for(k=1 ; k<=t; k++)
    {
        long long int n,b;
        int a[1000];
        scanf("%lld %lld",&n,&b);
        int i=0;
        while(n)
        {
            a[i]=n%b;
            n/=b;
            i++;
        }
        n=i;
        int j=n-1;
        i=0;
        for(i=0 , j=n-1; i<n/2 ; i++, j-- )
        {
            b=a[i];
            a[i]=a[j];
            a[j]=b;
        }
        long long int ans=0;
        for(i=0; i<n ; i++)
        {
            ans=a[i]+ans*10;
        }
        printf("Case %d: %lld\n",k,b=log10(f(ans))+1);

    }
    return 0;
} ****/
