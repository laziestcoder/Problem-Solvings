#include<iostream>
using namespace std;

class power
{
public:
    int x,y,i;
    void pr()
    {
        int res = 1;
        for(i=0;i<y;i++)
            res = res * x;
        cout << res;
    }
};
int main()
{
    power ob;
    cin >> ob.x >> ob.y;
    ob.pr();
    return 0;
}
