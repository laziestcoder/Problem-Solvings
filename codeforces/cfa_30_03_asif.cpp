#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin>>n>>a>>b;
    if(b == 0){cout<<a<<endl;return 0;}
    if(b<0){
            int k = abs(b);
        while(1){
                if(k==0)break;
            if(a-1 == 0)  a = n;
            else a--;
            k--;
        }
    }
    if(b>0){
        a = (a+b)%n;
        if(a == 0) a = n;
    }
    cout<<a<<endl;
}
