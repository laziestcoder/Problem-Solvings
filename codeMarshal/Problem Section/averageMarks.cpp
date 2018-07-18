#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

    int T;
    cin >> T;
    for(int t = 1; t <= T; t++){
        int n,num,sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> num;
            sum+=num;
        }
        cout << "Case " << t << ": " << sum/n << endl;
    }
    return 0;
}
