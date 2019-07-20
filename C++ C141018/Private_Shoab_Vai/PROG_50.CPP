// Copy Constructor, Page: 99
// Output Problem
#include<iostream>
using namespace std;

class samp
{
    int i;
public:
    samp(int n)
    {
        i = n;
        cout << "Constructing" << endl;
    }
    ~samp()
    {
        cout << "Destructing" << endl;
    }
    int get()
    {
        return i;
    }
};

int sqr_it(samp o)  // samp o er jonno only destructor call hobe, constructor
{                   // call hobe na
    int x = o.get()*o.get();    // 100 = 10 * 10
    return x;   // x er 1ta temporary copy toiri hobe
}

int main()
{
    samp ob(10);
    cout << sqr_it(ob) << endl;
    return 0;
}
