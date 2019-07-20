// Returning Object from Functions: Page: 103
#include<iostream>
using namespace std;

class myclass
{
    int i;
public:
    void set_i(int x)
    {
        i = x;
    }
    int get_i()
    {
        return i;
    }
};
myclass make()
{
    int val;
    myclass temp; // Object of myclass
    cin>>val;
    temp.set_i(val);
    return temp;
}
int main()
{
    myclass obj; // i, set_i(), get_i()
    obj = make(); // temp, i = 13
    cout << obj.get_i() << endl;
    return 0;
}

