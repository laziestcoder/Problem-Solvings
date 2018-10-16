    #include <stdio.h>

    int main()
    {
        long long int t, cn, n, m;
        scanf("%lld", &t);
        for(cn=1;cn<=t;cn++){
            scanf("%lld %lld", &n, &m);
            printf("Case %lld: %lld\n", cn, m*(n/2));
        }
        return 0;
    }
