
#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef long long int LLI;
typedef unsigned long long LLU;

#define nmem(a) memset(a,0,sizeof a)
#define dmem(a) memset(a,-1,sizeof a)
#define MAX 100005

int powr(int a,int b)
{
    int i,pwr=1;
    if(b==0) return 1;
    for(i=1;i<=b;i++) {
        pwr=pwr*a;
    }
    return pwr;
}

LLI n,t,chk1,chk2,nm,i;
char s[101];

int main()
{
    cin>>n>>t;
    if(t==10 && n>=2) {
        s[0]='1';
        for(i=1;i<n;i++) {
            s[i]='0';
        }
        cout<<s;
        return 0;
    }
    if(t==10 && n==1) {
        cout<<-1;
        return 0;
    }
    for(i=1;i<=n;i++) {
        cout<<t;
    }

    return 0;
}
