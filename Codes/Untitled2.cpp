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
using namespace std;
int t, i, u, v, stime, assign=0, par[100];
int khujo(int a){
    if(par[a]==a) return a;
    else par[a]=khujo(par[a]);
    return par[a];
    }
int main(){
    for(i=0; i<100; i++) par[i]=i;
    map<string, int>let;
    cin>>t;
    string a, b;
    while(t--){
        cin>>a>>b;
        if(let.find(a)==let.end()) {
            let[a]=assign;
            u=assign++;
        }
        else u=let[a];
        if(let.find(b)==let.end()) {
            let[b]=assign;
            v=assign++;
        }
        v=let[b];
        par[v]=u;
    }
    cin>>stime;
    while(stime--){
        string c, d;
        cin>>c>>d;
        int frst=let[c];
        int scnd=let[d];
        if(khujo(frst)==khujo(scnd)) cout<<"Friend";
        else cout<<"Not Friend";
        cout<<endl;
    }
return 0;
}
