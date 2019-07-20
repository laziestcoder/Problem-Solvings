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
            cin>>a[i];
    }
    int operator [] (int indx)
    {
        return a[indx];
    }
};

int main()
{
    int i;
    myclass ob;
    ob.input();
    for(i=0;i<5;i++)
        cout << ob[i] << " ";   // ob[i] = a[indx]
    cout << endl;
    return 0;
}
