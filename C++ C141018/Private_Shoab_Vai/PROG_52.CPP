// Like the program of Page: 104
// Output Problem
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class samp
{
    char *s;
public:
    samp()
    {
        s = 0;
    }
    ~samp()
    {
        cout << "Freeing" << endl;
    }
    void show()
    {
        cout << s << endl;
    }
    void set(char *str)
    {
        s = (char *)malloc(strlen(str)+1);
        if(s==0)
        {
            cout << "Allocation error" << endl;
            exit(1);
        }
        strcpy(s, str);
    }
};

samp input()
{
    char a[80];
    cin >> a;
    samp tob;
    tob.set(a);
    return tob;
}

int main()
{
    samp ob;
    ob = input();
    ob.show();
    return 0;
}
