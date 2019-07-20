#include<iostream>

using namespace std;

class inventory
{
    char item[40];
    int onhand;
    double cost;

    public:
    friend istream & operator>>(istream &stream, inventory &o)
    {
        stream>>o.item;
        stream>>o.onhand;
        stream>>o.cost;
        return stream;
    }
    friend ostream & operator<<(ostream &stream, inventory o)
    {
        stream<<"item name : "<<o.item<<endl;
        stream<<"onhand : "<<o.onhand<<endl;
        stream<<"cost : "<<o.cost<<endl;
        return stream;
    }
};


int main()
{
    inventory ob;
    cout<<"input name, onhand, cost : ";
    cin>>ob;
    cout<<ob;
    return 0;
}
