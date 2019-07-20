#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[101], p[10];
    int i, j, k, l = 1, b, r, h, m, n, f, c;
    scanf("%d", &k);
    getchar();
    while(k--) {
        gets(s);
        n=0;
        h=0;
        b=0;
        r=0;
        m=0;
        f=0;
        c=0;
        /*if(!strchr("Nw", s[i]))
            c++;
        if(s[i]=='N'||s[i]=='w')
            f=1;
        if(!(c%6))
            f=0;*/

        for(i=0; s[i]; i++) {
            if(!strchr("Nw", s[i]))
                c++;
            if(s[i]=='N'||s[i]=='w')
                f=1;
            if(!(c%6))
                f=0;
            if(s[i]=='0' || s[i]=='W')
                b++;
            if(b==6 && !f) {
                m++;
                b=0;
            }

            if((s[i]=='W')/*&&s[i+1]=='W'&& s[i+2]=='W') && s[i] && s[i+1]*/)
                n++;
            if(n==3) {
                h++;
                n=0;
            }
            if(s[i]>='1' && s[i]<='9') {
                r+=(s[i]-48);
                b=0;
            n=0;
            }
            if(s[i]=='w' || s[i]=='N') {
                r++;
                b=0;
                n=0;
            }
        }
        printf("Caes %d:\n", l++);
        printf("Hat trick: %d\n", h);
        printf("Maiden over: %d\n", m);
        printf("Total runs: %d\n", r);

    }
    return 0;
}
