#include  <bits/stdc++.h>
using namespace std;

bool status[111101];
int prime[111101];

void siv()
{
    int n = 111100, sq = sqrt(n);
    for(int i = 4; i<=n; i+=2)status[i] = 1;
    for(int i = 3; i<=sq; i+=2)
        if(status[i] == 0)
        for(int j = i*i;j<=n;j+=i)
            status[j] = 1;
    status[0]= status[1] = 1;
    for(int i = 0, k = 0;i<=n;i++)
        if(status[i] == 0)prime[k++] = i;
}

int main()
{
    siv();
    int n, u, l;
    while(cin>>l>>u){
        vector<int>v;
        for(int i = l;i<=u;i++){
            if(status[i] == 0)
                v.push(i);
        }
        if(v.size()<2){cout<<0<<endl;continue;}
        int d[10000] = {0};
        for(int i = 0;i<v.size()-1;i++){
            d[v[i+1]-v[i]]++;
        }
        for(int i = 0;i<200;i++){
            cout<<i<<
        }
    }
}
