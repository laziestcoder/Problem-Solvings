#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    long long int x, sum = 0;

    scanf("%i", &T);

    for(int i = 1; i <= T; i++)
    {
        scanf("%i", &N);

        for(int j = 1; j <= N; j++)
        {
            scanf("%lli", &x);

            sum += x;
        }
        if(N % 2 == 1){
            printf("Case %i: No\n",i);
            sum = 0;
            continue;
        }

        else if(sum % 2 == 0)
            printf("Case %i: Yes\n", i);
        else
            printf("Case %i: No\n", i);
            sum = 0;
    }


    return 0;
}
