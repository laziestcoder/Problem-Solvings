#include<bits/stdc++.h>
using namespace std;

int main () {

    int n, sumA = 0 , sumD = 0;
    cin >> n;
    for (int i=0; i<n; i++){
        char a;
        cin >> a;
        if(a == 'A'){
            sumA ++;
        }
        else
            sumD++;
    }

    string result = sumA > sumD ? "Anton" : ( sumD > sumA ? "Danik" : "Friendship" )  ;

    cout << result  << endl;

    return 0;

}

