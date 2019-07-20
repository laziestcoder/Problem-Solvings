// Queue
#include<iostream>
using namespace std;

class queue
{
    int a[5],f,r;
public:
    queue()
    {
        f = r = -1;
    }
    void push(int x)
    {
        if((f==0 && r==4) || (r+1==f))
            cout << "overflow\n";
        else
        {
            r++;
            if(r==5)
                r = 0;
            a[r] = x;
            if(f==-1)
                f = 0;
        }
    }
    void pop()
    {
        if(f==-1 && r==-1)
            cout << "underflow\n";
        else
        {
            if(f==r)
                f=r=-1;
            else
            {
                r++;
                if(f==5)
                    f = 0;
            }
        }
    }

    void show()
    {
        int i;
        if(f==-1 && r==-1)
            cout << "empty\n";
        else if(f<=r)
        {
            for(i=f;i<=r;i++)
                cout << a[i] << " ";
            cout << endl;
        }
        else
        {
            for(i=f;i<=4;i++)
                cout << a[i] << " ";
            for(i=0;i<=r;i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
};

int main()
{
    class ob;
    int a[5]={1,2,3,4,5};
    a.show;
    return 0;

}
