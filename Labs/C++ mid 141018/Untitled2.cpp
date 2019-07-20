#include<iostream>

using namespace std;

class first

{
    int p,q;
public:
    first (int a,int b)
    {
         p=a; q=b;
    }
    first()
    {
        p=5; q=4;
    };

 friend void  add (int a,int b);
};
class second
{
    int x,y;
public:
    second()
    {
        x=10; y=10;
    }
    second(int a,int b)
    {
        x=a; y=b;
    }
    void add (first a,second b);

 friend void add(first a,second b)

{
    cout<<a,p+b.x<<"\n";
}
};
int main ()
{
    first obj1(5,20);
    second obj2 (20,25);
    add(obj1,obj2);
    return 0;
}
