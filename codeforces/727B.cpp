#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin >> t;
    for (int i=0; i< t; i++) {
        int n, k;
        cin >> n >> k;

        vector <int> v(n), tmp(n);
        long long int j;
        for(j=0; j<n; j++){
            cin >> v[j];
            tmp[j] = v[j];
        }
        sort(tmp.begin(), tmp.end());
        map <int, int> mp;

        for(j=0; j<n; j++){
            mp[tmp[j]] = j+1;
        }

        long int sa = 0;
        for(j=0; j<n-1; j++){
            if (mp[v[j+1]] - mp[v[j]] != 1) sa++;
        }

        string result = "Yes";
        if(sa >= k){
            result = "No";
        }

        cout << result <<endl;
    }


    return 0;
}
