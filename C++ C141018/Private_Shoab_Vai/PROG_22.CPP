#include<iostream>
using namespace std;
class myclass
{
    int a;
public:
    void set_a(int x)
    {
        a = x;
    }
    void show_a()
    {
        cout << a << endl;
    }
};
int main()
{
    myclass ob,*p;
    ob.set_a(100);
    ob.show_a();
    p = &ob;
    (*p).set_a(-99); // or, p->set_a(-99) any one can be used
    ob.show_a();
    return 0;
}
