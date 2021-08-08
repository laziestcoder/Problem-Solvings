#include<bits/stdc++.h>
using namespace std;

int main () {

    int n,h, sum = 0;
    cin >> n >> h;
    for (int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a>h){
            sum +=2;
        }
        else
            sum++;
    }

    cout << sum << endl;

    return 0;

}
