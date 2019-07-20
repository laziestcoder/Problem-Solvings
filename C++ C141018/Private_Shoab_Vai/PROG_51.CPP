// P: 101
// Output Problem
#include<iostream>
#include<cstdlib>
using namespace std;

class myclass
{
    int *p;
public:
    myclass(int i)
    {
        p = (int *)malloc(sizeof(int));
        *p = i;
    }
    ~myclass()
    {
        free(p);
    }
    int get()
    {
        return *p;
    }
};

int neg(myclass o)  // o = ob
{
    return o.get()*(-1);    // -10
}

int main()
{
    myclass ob(10);
    cout << neg(ob) << endl;    // -10
    cout << ob.get() << endl;   // 10 dekhabe na
    return 0;
}
