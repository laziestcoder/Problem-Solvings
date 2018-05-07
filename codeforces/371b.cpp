#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a[100005],n,cn=0,i,x;
    long long int sum=0;
    double avg=0;
    scanf("%lld",&n);
    for(i=0; i<n ;i++)
    {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    avg=(sum*1.0)/n;
    x=abs(avg-a[0]);
    for(i=0; i<n; i++ )
    {

        if(x<0.90)
        {
            x=abs(avg-a[i]);
        }
        else
        {
            if(abs(x-abs(avg-a[i]))>0.90 && abs(avg-a[i])>0.90 )
                {
                    cn++;
                    break;
                }
        }
    }
    if(cn)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
