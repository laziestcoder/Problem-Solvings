// Two dimensional array of objects
#include<iostream>
using namespace std;

class samp
{
    int a;
public:
    samp(int i)
    {
        a = i;
    }
    void show()
    {
        cout << a << endl;
    }
};
int main()
{
    samp ob1[3][2] = {samp(10),samp(11),samp(11),samp(12),samp(13),samp(14)}; // 00, 01, 10, 11, 20, 21
    ob1[2][1].show(); // 14
    samp ob2[4][2] = {10,11,12,13,14,15,16,17};
    ob2[1][1].show(); // 13
    return 0;
}
