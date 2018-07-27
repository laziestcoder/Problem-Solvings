#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++){
            int j,n;
        cin>>n;
        printf("Case %d:\n",i);
        for(j=1;j<=n;j++){
                int k;
            for(k=1;k<=j;k++){
                cout<<k;
            }
            cout<<endl;
        }

    }

    return 0;
}
