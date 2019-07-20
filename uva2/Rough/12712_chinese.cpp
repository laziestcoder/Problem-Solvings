#include <cstdio>
int main()
{
    freopen("in.txt","r", stdin);
	int n, minn, maxx;
	int t=0, cas = 0, i, j,tt;
	long long sum = 0, tmp, mod = 10000000000007;
	while(~scanf("%d",&t))
	{
		while(1)
		{
		    if(t==0)
                return 0;
			scanf("%d%d%d",&n,&minn,&maxx);

			sum = 0, tt = n*n, tmp = 1;
			for(i = 1; i <=minn; i++)
			{
				tmp*=tt;
				tmp%=mod;
				tt--;
			}
			sum = tmp%mod;
			for(i = minn+1; i <= maxx; i++)
			{
				tmp*=tt;
				tmp%=mod;
				tt--;
				sum+=tmp;
				sum%=mod;
			}
			printf("Case %d: %lld\n",++cas,sum);
			t--;
		}
	}
	return 0;
}
