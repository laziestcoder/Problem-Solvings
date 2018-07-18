#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

    int n,x1,y1,x2,y2;
    string s;
    cin >> n;
    for(int t = 1; t <= n; t++){
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> s;
        int flag = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'R'){
                if(i%2 == 0 && x1 < 7)x1++;
                else if(i%2 == 1 && x2 < 7)x2++;
            }
             if(s[i] == 'L'){
                if(i%2 == 0 && x1 > 0)x1--;
                 if(i%2 == 1 && x2 > 0)x2--;
            }
             if(s[i] == 'U'){
                if(i%2 == 0 && y1 < 7)y1++;
                else if (i%2 == 1 && y2 < 7)y2++;
            }
             if(s[i] == 'D'){
                if(i%2 == 0 && y1 > 0)y1--;
                else if(i%2 == 1 && y2 > 0)y2--;
            }
            if(x1 == x2 && y1 == y2){
                flag = 1;
                break;
            }
        }
        if(flag)cout << "Case " << t << ": COLLISION" << endl;
        else cout << "Case " << t  << ": SAFE" << endl;
    }
    return 0;
}
