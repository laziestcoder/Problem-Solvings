#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,n,b,d,a;

            scanf("%d %d %d",&n,&b,&d);
    int sum=0,cn=0;
    for(i=1; i<=n ;i++)
    {

        scanf("%d",&a);
        if(a>b)
            continue;
        else
            sum+=a;
            if(sum>d)
        {
            cn++;
            sum=0;
        }

    }
    cout<<cn<<endl;

    return 0;
}
