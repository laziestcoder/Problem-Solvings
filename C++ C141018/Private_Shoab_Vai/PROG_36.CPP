#include<iostream>
using namespace std;

class samp
{
    int a,b;
public:
    samp(int i, int j) // Constructor e akadhik parameter thakle Short Form use kora jabe na
    {
        a = i;
        b = j;
    }
    void show()
    {
        cout << a << endl;
        cout << b << endl;
    }
};
int main()
{
    samp ob[4] = {samp(10,15),samp(1,2),samp(11,16),samp(7,8)}; // Long Form
    ob[1].show(); // 1 2
    return 0;
}
