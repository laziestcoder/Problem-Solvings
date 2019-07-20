// Subscript [] operator overloading
#include<iostream>
using namespace std;

class myclass
{
    int a[5];
public:
    void input()
    {
        int i;
        for(i=0;i<5;i++)
            cin >> a[i];
    }
    int & operator [] (int x)
    {
        return a[x];
    }
};

int main()
{
    myclass ob;
    ob[0] = 10;
    ob[1] = 11;
    ob[2] = 12;
    ob[3] = 1;
    ob[4] = 2;
    for(int i=0;i<5;i++)
        cout << ob[i] << " ";
    cout << endl;
    return 0;
}
