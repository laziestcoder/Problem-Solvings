//9.1:Pointer to Object(Page-224)
#include<iostream>
using namespace std;

class item
{
    int code;
    float price;
    public:
    void getdata(int a,float b)
    {
        code=a;
        price=b;
    }

    void display()
    {
        cout << "Code   :" << code << endl;
        cout << "Price  :" << price << endl;
    }
};

const int size=2;

int main()
{
    int i,x;
    float y;
    item *p = new item [size];
    item *d = p;

    for(i=0;i<size;i++)
    {
        cout << "Input item Code and Price For Item "<< i+1 <<":";
        cin >> x >> y;
        p->getdata(x,y);
        p++;
    }

    for(i=0;i<size;i++)
    {
        cout << "ITEM:"<< i+1 <<"\n";
        d->display();
        d++;
    }

    return 0;
}


