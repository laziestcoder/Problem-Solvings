int mark[1000002];
vector<int> divisors[1000002];

void Divisors(int n)
{
 int i, j;
 for(i = 1; i <= n; i++)
 for(j = i; j <= n; j += i)
 divisors[j].push_back(i);
}
