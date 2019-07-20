#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,i,n,j,d,sum,x1,x2,a,b;
    char n1[105],n2[105];
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        sum=0;
            scanf("%s",n1);
            scanf("%s",n2);

        for(j=0; j<n; j++)
        {
            a=n1[j]-'0';
            b=n2[j]-'0';

            x1=0;
            for(;;)
            {
                if(a==b)
                break;

                else if(a==9)
                 {
                     a=0;
                     x1++;
                 }
                 else
                 {
                     a++;
                        x1++;
                 }

            }
            a=n1[j]-'0';
            b=n2[j]-'0';
            x2=0;
            for(;;)
            {
                if(a==b)
                break;
                else if(a==0)
                 {
                     a=9;
                     x2++;
                 }
                else
                 {
                    a--;
                    x2++;
                 }

            }

        if(x1>x2)
            d=x2;
        else if(x1 < x2 || x1==x2)
            d=x1;

        sum=sum+d;

        }

        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}


