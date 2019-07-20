#include<bits/stdc++.h>
using namespace std;

typedef long long Long;
const int maxn = 5e2 + 10;
const double eps = 1e-8;

bool ok(double m, double r, double R, double h)
{
    r*=2; R*=2;
    double seta = atan(h/((R-r)/2.0));
    double afa = atan(m/(R/2.0));
    double bata = seta - afa;
    double edge = sqrt(m*m+(R/2.0)*(R/2.0));
    double ans = edge*sin(bata);
    return ans >= m;
}
int main()
{
    double r, R, h;

    while (scanf("%lf%lf%lf", &r, &R, &h) != EOF)
    {
        double low = 0, high = h/2.0;

        while (high-low >= eps)
        {
            double mid = (low+high) / 2.0;
            if (ok(mid,r,R,h))
            {
                low = mid;
            }
            else high = mid;
        }
        printf("%.7f\n", low);
    }

    return 0;
}

/*****
or

#include<bits/stdc++.h>
using namespace std;

int main () {
    double h, R, r;
    cin >> r >> R >> h;

    double H = h +(h*r)/(R-r);
    double c = sqrt(H*H+R*R);
    R=R+R;
    double a = 0.5*H*R;
    double s = (R+c+c)*0.5;
    double ans = 2*(a/s);
    ans = min(ans, h);

    printf ("%0.12lf", ans*0.5);
    return 0;
}

*****/
