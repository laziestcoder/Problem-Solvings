#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <map>

#define debug printf("\n<<Came here<<\n")
#define i64 long long
#define mem(x,y) memset(x,y,sizeof(x))
#define max 12
using namespace std;
i64 dpf[max+1], dpnc[max+1][max+1];
i64 fact(i64 n){
    if(dpf[n]!= -1) return dpf[n];
    if(n==1 || n==0) return 1;
    dpf[n]=n*fact(n-1);
    return dpf[n];
}
i64 ncr(int n, int r){
    if(n==r) return 1;
    if(r==1) return n;
    if(dpnc[n][r] != -1) return dpnc[n][r];
    dpnc[n][r]=ncr(n-1,r)+ncr(n-1, r-1);
    return dpnc[n][r];
}
int main(){
    mem(dpf,-1);
    mem(dpnc, -1);
    int t, i,num;
    i64 temp, t1, t2;
    cin>>t;
    while(t--){
        cin>>num;
        temp=0;
        for(i=2; i<=num; i++){
            t1=fact(num-i);
            t2=ncr(num, i);
            if(i%2==1) temp-=(t1*t2);
            else temp+=(t1*t2);
        }
        cout<<temp<<"/"<<fact(num)<<"\n";
    }
return 0;
}
