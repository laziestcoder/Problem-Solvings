// Constructors(With Parameter), Destructors and Inheritance
// Output:
// Constructing base
// Constructing derived
// 12
// 13
// Destructing derived
// Destructing base
#include<iostream>
using namespace std;

class base
{
    int i;
public:
    base(int p) // p = 12
    {
        i = p; // i = 12
        cout << "Constructing base\n";
    }
    ~base()
    {
        cout << "Destructing base\n";
    }
    void show_i()
    {
        cout << i << endl;
    }
};
class derived : public base
{
    int j;
public:
    derived(int n, int m) : base(m) // n = 13, m = 12
    {
        j = n; // j = 13
        cout << "Constructing derived\n";
    }
    void show_j()
    {
        cout << j << endl;
    }
    ~derived()
    {
        cout << "Destructing derived" << endl;
    }
};

int main()
{
    derived o(13,12);

    o.show_i(); // 12
    o.show_j(); // 13

    return 0;
}

