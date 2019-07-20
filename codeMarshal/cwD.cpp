#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    unsigned long long int a,b,sum1=1,sum2=1,x=1,y=1,i,j,k;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n==0 && m==0)
            return 0;
        else
        {
            sum1=1; sum2=1;
            for(i=0; i<n; i++)
            {
                cin >> a;
                if(a==0)
                    x=1;
                else
                {
                    for(x=1,k=1; k<= a ; k++)
                       x=x*k;
                }
                sum1=sum1*x;
            }
            for(j=0; j<m ; j++)
            {
                cin >> b;
                if(b==0)
                    y=1;
                else
                {
                    for(y=1, k=1; k<= b ; k++)
                      y=y*k;
                }
                sum2=sum2*y;

            }
            if(sum1==sum2)
                cout << "YES\n";
            else
                cout << "NO\n";

        }
    }
    return 0;
}

