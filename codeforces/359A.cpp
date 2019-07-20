#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n, x, d,cn=0;
    char c;
    //while(1){

        cin>>n>>x;
        cn=0;
    while(n--)
    {
        cin>>c>>d;
        if(c == '+')
            x+=d;
        else
        {
            if(x<d)
                cn++;
            else
                x-=d;
        }
    }
    cout << x << " " << cn <<endl;
    //}
    return 0;
}
