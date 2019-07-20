// Passing objects to Functions, H.S: 96 page, 3.2
#include<iostream>
using namespace std;

class samp
{
    int i;
public:
    samp(int n)
    {
        i = n;
    }
    int get_i()
    {
        return i;
    }
};
//Return square of temp.i.
int sqr_it(samp temp) // This is not a member function
{
    return temp.get_i()*temp.get_i(); // temp is an object of the samp class
}
int main()
{
    samp ob1(10),ob2(2); // i = 10, i = 2
    cout << sqr_it(ob1) << endl; // Member function na hole avabe call korte hobe
    cout << sqr_it(ob2) << endl; // // Output: 100, 4
    return 0;
}
