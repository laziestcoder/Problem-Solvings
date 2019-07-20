#include<bits/stdc++.h>
using namespace std;
#define sz 5000

int main(){
    vector<int>g[sz];
    int n,m,i;
    memset(g,-1,sz);
    while(cin>>n>>m && n && m){
        for(i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            g[a].push_back(b);
        }


    }
    return 0;
}
