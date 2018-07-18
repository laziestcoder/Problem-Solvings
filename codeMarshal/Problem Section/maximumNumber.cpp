#include<iostream>
using namespace std;
int main(){

    int n,ar[4];
    cin >> n;
    for(int i = 1; i <= n; i++){
        int myMax = -325840;
        for(int j = 0; j < 3; j++){
            cin >> ar[j];
            if(ar[j] > myMax)myMax = ar[j];
        }
        cout << "Case " << i << ": " << myMax << endl;
    }
    return 0;
}
