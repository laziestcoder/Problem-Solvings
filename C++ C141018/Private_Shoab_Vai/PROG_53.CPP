// Copy Constructor

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

    myclass(const myclass &obj)
    {
        this->p = (int *)malloc(sizeof(int));
        *(this->p) = *(obj.p);
    }

    int get()
    {
        return *p;
    }
//    int neg(myclass o)    // Class er baire likhte hobe, karon myclass er
//    {                        object ache
//        return o.get()*(-1);
//    }
};

int neg(myclass o)  // o = ob
{
    return o.get()*(-1);    // -10
}
int main()
{
    myclass ob(10);
    cout << neg(ob) << endl;    // -10
    cout << ob.get() << endl;   // 10
    return 0;
}
