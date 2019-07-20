#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,s;
    while(scanf("%d",&n)!=EOF)
    {
        s=n;
        while(n>3)
        {
            s=s+n/3;
            n=(n/3)+(n%3);
        }
        if(n>1)
            cout<<s+1<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
