#include <iostream> //105.INLINE FUNCTION
#include <conio.h>
using namespace std;

class item
{
    int number;
    static int count;

public:
    void getdata(int a)
    {
        number = a;
        count ++;
    }

    void getcount(void)
    {
        cout << "Count : ";
        cout << count << endl;
    }
};

int item :: count;

int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout << "After Reading Data " << endl;

    a.getcount();
    b.getcount();
    c.getcount();

getch();
return 0;
}
