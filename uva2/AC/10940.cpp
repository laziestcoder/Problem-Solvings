#include<bits/stdc++.h>
using namespace std;
/** int str(int n)
{
    int i;
    vector < int > s;
    s.clear();
    for(i=1; i<=n; i++)
    {
        s.push_back(i);
    }
    while(s.size()> 1)
    {
        s.erase(s.begin());
        s.push_back(s[0]);
        s.erase(s.begin());
    }
    return s.front();
}**/


int main ()
{
    int n,d,i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        else if(n<=2)
            cout<<n<<endl;
        else
        {
            int x=1;
            /** d=str(n); **/
            for(i=1; i<=n; i++)
            {
                if(x <=n )
                {
                    d=x;
                    x*=2;
                }
                else
                    break;
            }
            if( d==n )
                printf("%d\n",d);
            else
            {
                x=d+1;
                d=0;
                for(i=x; i<=n ; i++)
                {
                    d+=2;
                }
                printf("%d\n",d);
            }

        }
    }
    return 0;
}
