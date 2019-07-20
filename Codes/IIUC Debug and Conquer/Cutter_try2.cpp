#include <bits/stdc++.h>
int main()
{
    char s[101];
    int f1, f2, h, i, j, k, l=1, m, n, r, c;
    scanf("%d", &k);
    getchar();
    while(k--) {
        gets(s);
        f1 = 0;
        f2 = 0;
        c = 0;
        m = 0;
        r = 0;
        h=0;
        for(i=0; s[i]; i++) {
            if(s[i] != 'N' && s[i] != 'w')
                c++;
            if(s[i]=='N' || s[i]== 'w') {
                f1 = 1;
                n = 0;
                r++;
            }
            if(strchr("123456", s[i])) {
                f2 = 1;
                n = 0;
                r+=(s[i]-48);
            }
            if(c==6 && !f1 && !f2) {
                m++;
                c = 0;
            }
            else if(c==6) {
                c = 0;
                f1 = 0;    //
                f2 = 0;    //
            }
            if(s[i]=='W')
                n++;
            if(n==3) {
                h++;
                n = 0;
            }
        }
        printf("Case %d:\n", l++);
        printf("Hat trick: %d\n", h);
        printf("Maiden over: %d\n", m);
        printf("Total runs: %d\n", r);
    }
}
