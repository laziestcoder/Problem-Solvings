//56 Page
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class strtype
{
    char *p;
    int len;
public:
    strtype(char *ptr);
    ~strtype();
    void show();
};

strtype::strtype(char *ptr)
{
    len = strlen(ptr);
    p = (char *)malloc(len+1);//len+1 for terminating null
    if(p==0)
    {
        cout << "Allocation error\n";
        exit(1);
    }
    strcpy(p,ptr);
}
strtype::~strtype()
{
    free(p);
}
void strtype::show()
{
    cout << p << "- length: " << len;
    cout << "\n";
}
int main()
{
    strtype s1("This is a test."), s2("I like C++.");
    s1.show();
    s2.show();
    return 0;
}


