    #include<bits/stdc++.h>
    using namespace std;
    int main ()
    {
        long long int a,b;
        int t,i=0;
        cin>>t;
        while(t--)
        {
            scanf("%lld %lld",&a,&b);
            printf("Case %d: %lld\n",++i,abs(a-b)*4+9+10+(a*4));
        }
        return 0;
    }

