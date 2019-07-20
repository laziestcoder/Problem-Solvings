    #include<bits/stdc++.h>
    using namespace std;
    int main ()
    {
        long long int t,n,sum=0,i,a;
        cin>>t;
        for(i=1; i<=t; i++)
        {
            cin>>n;
            sum=0;
            while(n--)
            {
                cin>>a;
                if(a<0)
                    continue;
                else
                    sum+=a;
            }
            printf("Case %lld: %lld\n",i,sum);
        }
        return 0;
    }

