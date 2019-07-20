// Array of Objects: 120 Page
#include<iostream>
using namespace std;

class samp
{
    int a;
public:
    samp(int n)
    {
        a = n;
    }
    int get_a()
    {
        return a;
    }
};
int main()
{
    samp ob1[4] = {samp(-1),samp(-2),samp(-3),samp(-4)}; // Long Form
    cout << ob1[2].get_a() << endl; // -3
    samp ob2[4] = {-10,-11,-12,-13}; // Short Form
    cout << ob2[3].get_a() << endl; // -13
    return 0;
}
