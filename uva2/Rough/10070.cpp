#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    long long int x=0;
    int t=0;
    while(scanf("%lld",&x)!=EOF)
    {
        if(t>0)
            cout << endl ;
        t=1;

    if(x%400==0 || (x%4==0 && x%100!=0))
        {
            cout << "This is leap year." << endl;
            if(x%15==0)
                cout << "This is huluculu festival year." << endl;
            if(x%55==0)
                    cout << "This is bulukulu festival year." << endl;
        }
    else if(x%15==0)
            cout << "This is huluculu festival year." << endl;
    else
            cout << "This is an ordinary year." << endl;


    }
    return 0;
}
