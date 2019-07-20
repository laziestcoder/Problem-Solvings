    #include<bits/stdc++.h>
    using namespace std;
    int main ()
    {
        int t,i=0,n;
        long long sum=0;
        cin>>t;
        while(t--)
        {
            sum=0;
            cin>>n;
            printf("Case %d:\n",++i);
            while(n--)
            {

                char s[10];
                int d;
                scanf("%s",s);
                if(s[0]=='d')
                {
                    scanf("%d",&d);
                    sum+=d;
                }
                else
                {
                    printf("%lld\n",sum);

                }
            }

        }
        return 0;
    }

