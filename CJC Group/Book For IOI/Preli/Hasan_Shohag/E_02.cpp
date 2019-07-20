#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>

#define mem(arr) memset(arr, 0, sizeof(arr))

using namespace std;

int main()
{
    string s;
    long long c[100005], t, i, j, f, len, start, now, k, mid;
    long long q;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        cin >> s;

        len = strlen(s.c_str());
        start=-1;
        now=-1;
        mid=-1;
        mem(c);

        for(j=0; j<len; j++)
        {
            if(s[j]=='^')
            {
                if(start==-1)
                {
                    start=0;
                    mid=0;
                    now=1;
                    c[start]++;
                }
                else
                {
                    f=0;
                    if(c[start]==2)
                    {
                        if(start==now)
                        {
                            now++;
                        }
                        if(mid==start)
                            mid++;
                        start++;
                        f=1;
                    }


                    if(f==0)
                    {
                        c[now]++;
                        now++;
                    }
                }

            }
            else
            {
                if(start==-1 && now == -1)
                    continue;

                if(c[mid]==1)
                {
                    c[mid]++;
                    mid++;
                }
            }
        }

        if(start < 0)
            start=0;


        if(c[start]<3) start--;


        printf("Case %lld: %lld\n", i, start+1);

    }








    return 0;
}
