    #include <bits/stdc++.h>
    using namespace std;

    double w, l;

    double get(double x) {
        return x * (w - 2.0*x) * (l - 2.0*x);
    }

    int32_t main () {
        //readfile("input.in");
        //writefile("output.out");
        int t; cin>>t;
        for(int cs = 1; cs <= t; cs++) {
            cin>>w>>l;
            double lo = 0.0;
            double hi = min(w, l)/2.0;
            for(int i=1; i<=300; i++) {
                double leap = (hi-lo)/3;
                double mid1 = (lo+leap);
                double mid2 = (lo+leap+leap);
                if(get(mid1) < get(mid2)) lo = mid1;
                else hi = mid2;
            }
            printf("Case %d: %lf\n", cs, get(hi));
        }
        return 0;
    }
