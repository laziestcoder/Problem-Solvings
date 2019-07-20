//Balagurussamy: 5.11,115 page.
//Output: count: 0
//        count: 0
//        count: 0
//        After reading data
//        count: 3
//        count: 3
//        count: 3

#include<iostream>
using namespace std;

class item
{
    static int count;
    int number;
public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount(void)
    {
        cout << "count: " ;
        cout << count << "\n";
    }
};
int item::count;

int main()
{
    item a,b,c;     // count is initialized to zero
    a.getcount();   // display count
    b.getcount();
    c.getcount();

    a.getdata(100);  // getting data into object a
    b.getdata(200);  // getting data into object b
    c.getdata(300);  // getting data into object c

    cout << "After reading data" << "\n";

    a.getcount();    // display count
    b.getcount();
    c.getcount();
    return 0;
}
