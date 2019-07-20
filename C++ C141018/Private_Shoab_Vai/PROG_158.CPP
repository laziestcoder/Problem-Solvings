#include<iostream>
#include<string>
using namespace std;

void func(int x)
{
    try
    {
        if(x!=0)
            throw x;
        else
            throw 'a';
    }
    catch(int i)
    {
        cout << "catch 1: " << i << endl;
    }
    catch(char ch)
    {
        cout << "catch 2: " << ch << endl;
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

