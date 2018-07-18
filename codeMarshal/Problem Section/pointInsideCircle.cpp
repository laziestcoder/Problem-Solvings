#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int T;
    cin >> T;
    for(int t = 1; t <= T; t++){
        long long int cx,cy,px,py,r,d;
        cin >> cx >> cy >> r >> px >> py;
        d = sqrt(pow((cx - px),2) + pow((cy - py),2));
        if(d < r) cout << "Case " << t << ": yes" << endl;
        else cout << "Case " << t << ": no" << endl;
    }
    return 0;
}
