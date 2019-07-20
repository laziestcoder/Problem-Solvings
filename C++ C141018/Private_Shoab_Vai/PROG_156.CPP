// P: 391
#include<iostream>
using namespace std;

void func(int x)
{
    try
    {
        if(x!=0)
            throw x;
    }
    catch(int i)
    {
        cout << i << endl;
    }
}

int main()
{
    cout << "start\n";
    func(1);
    func(2);
    func(0);
    func(3);
    cout << "finish\n";
    return 0;
}
