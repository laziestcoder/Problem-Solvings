    #include<bits/stdc++.h>
    using namespace std;
    int main ()
    {
        int t,k;
        cin>>t;
        for(k=1; k<=t; k++)                 /***** incomplete *******/
        {
            long long int n;
            scanf("%lld",&n);

            bool a[60];
            bool b[60];
            memset(a, 0, sizeof(a));
            memset(b, 0, sizeof(b));

            int i = 0 ;
            while(n)
            {
                a[i]=n%2;
                n/=2;
                i++;
            }
            n=i;
            i=0;


            int j ,ones;
            j=1; ones=0;

            while(1)
            {
                if(a[i] == 1 && a[j] == 0)
                    break;

                if(a[i] == 1)
                    ones++;
                i++;
                j++;
            }

            for (int i = 0; i < ones; i++)
                b[i] = 1;
            b[j] = 1;

            for (i = j + 1; i <= n+1; i++)
                b[i] = a[i];


            long long int ans, f;
            f=1;
            ans = 0;
            for (i=0 ; i <= n + 1; i++, f = f * 2)
                ans = ans+ b[i] * f;


         printf("Case %d: %lld\n",k,ans);
        }
        return 0;
    }

