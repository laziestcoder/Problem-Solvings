#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long polygons;
    cin >> polygons;
    ostringstream outputText;
    for (long long c = 0; c < polygons; c++)
    {
        long long anglesum;
        cin >> anglesum;
        outputText << "Case " << c+1 << ": ";
        if (anglesum % 180 == 0 && anglesum >= 180) {
            long long sides = (anglesum / 180) + 2;
            long double angle = (long double)anglesum / sides;
            outputText << sides << " " << setprecision(10) << round(angle);
        } else {
            outputText << "Impossible";
        }
        outputText << endl;
    }
    cout << outputText.str();
    return 0;
}
