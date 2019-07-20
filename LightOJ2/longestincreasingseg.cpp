#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,i=0;
    cin>>t;
    while(t--)
    {
        int l,n,a[100005];
        cin>>n;

        for(l=0; l<n; l++)
                scanf("%d",&a[l]);


        a[l]='\0';

        long long int mx,c;
        mx=0; c=0;

        for(l=0 ; l<n; l++)
        {
            if(a[l] <= a[l+1])
                c++;
            else
            {
                if(mx<=c)
                    mx=c;
                c=0;
            }
        }
        printf("Case %d: %lld\n",i=i+1,mx=mx+1);
    }
    return 0;
}
