// This Pointer
#include<iostream>
using namespace std;

class samp
{
    int a;
public:
    void set_a(int x)
    {
        a = x;
    }
    void show_a()
    {
        cout << this->a << endl; // Ekhane (this) dileo hobe na dileo hobe
    }
};
int main()
{
    samp ob1, ob2;

    ob1.set_a(11);
    ob2.set_a(99); // 99

    ob2.show_a();

    return 0;
}
