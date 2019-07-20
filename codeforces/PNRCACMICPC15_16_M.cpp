#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,c,a[15],b,cn,i,x,d=0;
    //while(1){
    cin>>n;
    char s[12][12];
    cn=0;
    for(i=1; i<=n ; i++)
        cin>>s[i]>>a[i];
    for(b=1; b<=100; b++)
    {
        x=b;
        cn=0;
        for(i=1; i<=n ; i++)
        {
            if(s[i][0]=='A')
            {
                x+=a[i];
                if(x<0)
                {
                    cn++;
                }
            }

            else if(s[i][0]=='M')
            {
                x*=a[i];
                if(x<0)
                {
                    cn++;
                }
            }

            else if(s[i][0]=='S')
            {
                x-=a[i];
                if( x <0)
                {
                    cn++;
                }

            }

            else if(s[i][0]=='D')
            {
                if(a[i]== 0)
                    cn++;
                else if( x%a[i]!=0 )
                {
                    cn++;
                }
                else
                    x/=a[i];
            }
        }
        if(!cn)
        d++;

    }
    cout<<100-d<<endl;

    // }
    return 0;
}
/***
1
SUBTRACT 5
2
ADD 5
DIVIDE 5
1
DIVIDE 2

***/
