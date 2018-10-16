    #include<bits/stdc++.h>
    using namespace std;
    #define pi 2*acos (0.0)
    #define eps 1e-9
    int main ()
    {

        long long int t,i;
        double r;
        cin>>t;
        for(i=1 ;i<=t ; i++)
        {
            cin>>r;
            double d=2*r;
            double x=pi*r*r;
            printf("Case %lld: %.2lf\n",i,((d*d)-x+eps));
        }
        return 0;
    }

