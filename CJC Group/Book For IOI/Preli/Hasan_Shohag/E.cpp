#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>

#define mem(arr) memset(arr, 0, sizeof(arr))

using namespace std;

int main()
{
    char ch;
    string s;
    int c[100005], t, i, j, f, len, start, now, k;
    int q;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        cin >> s;

        len = strlen(s.c_str());
        start=-1;
        now=-1;
        mem(c);

        for(j=0; j<len; j++)
        {
            if(s[j]=='^')
            {
                if(start==-1)
                {
                    start=0;
                    now=1;
                    c[start]++;
                }
                else
                {
                    f=0;
                    for(k=start; k<=now; k++)
                    {
                        if(c[k]==2)
                        {
                            if(start==now)
                            {
                                now++;
                            }
                            start++;
                            f=1;
                            break;
                        }
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
                for(k=start; k<=now ; k++)
                {
                    if(c[k]==1)
                    {
                        c[k]++;
                        break;
                    }
                }
            }
        }

        if(start < 0)
            start=0;

        if(c[start]<3) start--;

        printf("Case %d: %d\n", i, start+1);

    }







    return 0;
}
