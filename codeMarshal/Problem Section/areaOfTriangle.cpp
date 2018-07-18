#include<bits/stc++.h>
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{


 int T;
    cin >> T;
    for(int t = 1; t <= T; t++){
        double a,b,c;
        cin >> a >> b >> c;
        double s = (a+b+c)/2;
        double p = s*(s-a)*(s-b)*(s-c);
        double r = sqrt(p);
        cout<<"Case "<<t<<": "<<fixed<<setprecision(10) <<r <<endl;
    }
    return 0;

}
