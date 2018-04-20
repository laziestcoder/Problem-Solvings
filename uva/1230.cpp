#include<bits/stdc++.h>
using namespace std;
long long int mypm(long long int x, long long int y,long long int n)
{
    long long int i,ans;
    if(y==0 )
        return 1;
    else if(y==1 || x==1)
        return x%n;
    else if(y%2==0)
            {
                ans=mypm(x,y/2,n);
                return (ans*ans)%n;
            }
    else
        {   ans=mypm(x,y-1,n);
            ans=((ans%n)*(x%n))%n;
            return ans;
        }



}
int main ()
{
    long long int j,z,a,b,c,t;
    while(scanf("%d",&t),t)
    {
        for(j=1; j<=t; j++)
        {
            cin>>a>>b>>c;
            cout<<mypm(a,b,c)<<endl;
        }
    }
    return 0;
}
