#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int cnta[7], cntb[7];
int main()
{
	ll int n, m;
	scanf("%lld %lld", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		cnta[i % 5]++;
	}
	for (int i = 1; i <= m; i++)
	{
		cntb[i % 5]++;
	}
	ll res = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if ((i + j) % 5 == 0)
			{
				res += 1LL * cnta[i] * cntb[j];
			}
		}
	}
	printf("%lld\n", res);
	return 0;
}

/***
using namespace std;
int main ()
{
    long long int i,j,k,l,m,n, cn=0;
    while(1){
            cin >> n >> m ;
            i=(4*(n/5))+(n%5);
            j=(4*(m/5))+(m%5);
            j=((i*j)/4)+(m/5)*(n/5);
            cout<<j<<endl;
    }
    return 0;
}***/
