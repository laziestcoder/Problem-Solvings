#include <bits/stdc++.h>
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
    int n;
    while(cin>>n){
        if(status[n]==0)cout<<"Impossible";
        int k = n, i = 0;
        while(1){
            if(status[k-status[i]]==0){i++;}//continue;}
            else if(status[i] == 0 and status[k-i]==1 and (k-i)%3==0 and status[(k-i)/3] == 0){
                cout<< i<<" "<<k-i<<" "<<k-i<<" "<<k-i<<endl;
            }
            //else if(status[i] == 0 and status[k-i]==1 and (k-i)%3==0 and status[(k-i)/3] == 0){
              //  cout<< i<<" "<<k-i<<" "<<k-i<<" "<<k-i<<endl;
           // }
        }
    }
}
