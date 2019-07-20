#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,i,ans;
    while(scanf("%d %d %d %d",&i,&a,&b,&c)==4){
        if(a==0 && b==0 && c==0 && i==0) break;

        ans = 720+360 + ( ( ( a>i ? (40-a) + i : (i-a) ) + ( b<a ? (40-a) + b : (b-a) ) + ( c>b? (40-c) + b : (b-c) ) ) ) * 9;

        cout<<ans<<endl;
    }
    return 0;
}
