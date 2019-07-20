#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
#define SIZE 255
class strtype
{
    char *p;
    int len;
public:
    strtype();
    ~strtype();
    void set(char *ptr);
    void show();
};
strtype::strtype()
{
    p = (char *)malloc(sizeof(char)*SIZE);
    if(p==0)//Pointer is making an 255 size array
    {
        cout << "allocating error";
        exit(1);
    }
    p[0] = '\0';
    len = 0;
}
strtype::~strtype()
{
    free(p);
}
void strtype::set(char *ptr)
{
    if(strlen(ptr) >= SIZE)
        cout << "String too big";
    else
    {
        strcpy(p,ptr);
        len = strlen(ptr);
    }
}
void strtype::show()
{
    cout << p << " " << len << endl;
}
int main()
{
    strtype s1,s2;
    s1.set("this is a test");
    s2.set("I like c++");
    s1.show();
    s2.show();
    return 0;
}
