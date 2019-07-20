#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,c,a[15],b,cn,i,y;
    double x;
    //while(1){
    cin>>n;
    char s[12][12];
    cn=0;
    for(i=1; i<=n ; i++)
        cin>>s[i]>>a[i];
    for(b=1; b<=100; b++)
    {
        x=b;
        for(i=1; i<=n ; i++)
        {
            if(s[i][0]=='A')
                x=x+a[i];
            else if(s[i][0]=='M')
                x=x*a[i];
            else if(s[i][0]=='S')
                x = x-a[i];
            else if(s[i][0]=='D')
                x = x / a[i];
        }
         y=x;
            if( y !=  x || y < 0 )
                cn++;
    }
    cout<<cn<<endl;
    //}
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
