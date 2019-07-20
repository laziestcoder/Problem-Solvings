// Copy Constructor
// Problem
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class myclass
{
    char *s;
public:
    myclass(const myclass &o)   // This is Copy Constructor
    {
        this->s = (char *)malloc(strlen(o.s)+1);
        strcpy(this->s, o.s);
    }
    myclass(char *str)
    {
        s = (char *)malloc(strlen(str)+1);
        strcpy(s, str);
    }
    ~myclass()
    {
        free(s);
    }

    void show()
    {
        cout << s << endl;
    }

    myclass()
    {

    }
};

int main()
{
    myclass ob1("hello");
    myclass ob2 = ob1;
    return 0;
}
