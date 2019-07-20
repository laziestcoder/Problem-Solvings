//An example of object assignment
#include<iostream>
using namespace std;
class myclass
{
    int a,b;
public:
    void set(int i,int j)
    {
        a = i;
        b = j;
    }
    void show()
    {
        cout << a << ' ' << b << "\n";
    }
};
int main()
{
    myclass o1,o2;
    o1.set(10,4);
    // Assign o1 to o2
    o2 = o1;
    o1.show(); // 10 4
    o2.show(); // 10 4
    o1.set(100,-99); // o1 ke change korle o2 change hobe na
    o1.show(); // 100 -99
    o2.show(); // 10 4
    return 0;
}
