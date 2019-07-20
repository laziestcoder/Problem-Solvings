#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long l1,r1,l2,r2,k,sum=0,s;
    scanf("%lld %lld %lld %lld %lld",&l1,&r1,&l2,&r2,&k);
    if(l2>l1)
    {
        if(r2>r1)
            sum=r1-l2+1;
        else
            sum=r2-l2+1;
    }
    else
    {
        if(r2>r1)
            sum=r1-l1+1;
        else
            sum=r2-l1+1;

    }
    if(l2>r1 || r2<l1)
    {
        cout<<0<<endl;
    }
    else
    {

        if((k>=l1 && k<=r1) && (k>=l2 && k<=r2))
        {
            cout<<sum-1<<endl;
        }
        else
            cout<<sum<<endl;
   }



    return 0;
}
