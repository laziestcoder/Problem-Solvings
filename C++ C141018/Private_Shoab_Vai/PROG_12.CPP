#include<iostream>
using namespace std;

class stack
{
    int val[5],top;
public:
    void push()
    {
        if(top==4)
            cout << "overflow\n";
        else
        {
            cout << "input a value : ";
            int x;
            cin >> x;
            top++;
            val[top]=x;
        }
    }
    void pop()
    {
        if(top==-1)
            cout << "underflow\n";
        else
            top--;
    }
    void show()
    {
        if(top==-1)
            cout << "empty";
        else
        {
            int i;
            for(i=0;i<=top;i++)
                cout << val[i]<< " ";
            cout << endl;
        }
    }
    void init()
    {
        top =-1;
    }
};
int main()
{
    stack s;
    s.init();
    int i;
    for(i=1;i<=8;i++)
        s.push();
    s.show();
    s.pop();
    s.show();
    for(i=1;i<=8;i++)
        s.pop();
    s.show();
    return 0;
}
