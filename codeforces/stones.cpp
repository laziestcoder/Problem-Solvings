#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,i,n;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        if(n<=2)
            printf("Case %lld: Saikat\n",i);
        else
        {
            if(n%3!=0)
                printf("Case %lld: Saikat\n",i);
            else
                printf("Case %lld: Rifat\n",i);
        }
    }
    return 0;
}
