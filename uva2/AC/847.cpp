#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n,s,c;
    while (scanf("%lld", &n)!=EOF)
    {
        bool s = true;
        c = 1;
        while (c<n)
        {
            if (s) c *= 9;
            else c *= 2;
            s = !s;
        }
        if (!s) puts("Stan wins.");
        else puts("Ollie wins.");
    }
    return 0;
}
