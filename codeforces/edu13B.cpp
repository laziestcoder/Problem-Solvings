#include<bits/stdc++.h>
using namespace std;
int lf(long long int n)
{
    if(n%400==0 || (n%4==0 && n%100!=0))
        return 1;
    else
        return 0;

}


int main ()
{
    long long int n;
    while(1)
    {
        cin>>n;
        int y = lf(n);
        int d=0;
        while(1)
        {
            n++;
            if(lf(n))
                d+=366%7;
            else
                d+=365%7;
            d%=7;
            if(d==0 && lf(n)== y)
                {
                    cout<<n<<endl;
                    break ;
                }

        }
    }
    return 0;
}
