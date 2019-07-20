#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,a=0,b=0,c=0,i,j;
    cin>>n;
    a=1234567; b=123456; c=1234;
        for(i=0; i*a<=n; i++)
        {
            for(j=0; i*a + j*b<=n ; j++)
            {
                if((n-(i*a + j*b))%c == 0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        cout<<"NO"<<endl;
    return 0;
}
