#include <bits/stdc++.h>
using namespace std;



int main () {

    int t;
    cin >> t;
    for (int i=0; i< t; i++) {
        int n;
        cin >> n;
        vector<long long int> a;
        long double sum = 0;
        for(int j=0; j<n; j++){

            long long int val;
            cin >> val;
            a.push_back(val);
        }

        sort(a.begin(), a.end());
        long long int j;
        for(j=0; j < a.size(); j++){
                sum += a[j];
        }
        j--;
        sum = sum - a[j];
        sum = a[j] + (sum/j) ;

        cout << fixed << setprecision(10) << sum <<endl;
    }


    return 0;
}
