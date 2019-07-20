//Call by reference: 97 Page
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
    void set_i(int n)
    {
        i = n;
    }
    int get_i()
    {
        return i;
    }
};
void sqr_it(samp *temp)
{
    int val;
    val = (*temp).get_i()*temp->get_i(); // *temp.get_i() and temp->get_i() both are Same
    (*temp).set_i(val);
}
int main()
{
    samp ob(10);
    sqr_it(&ob);
    cout << ob.get_i() << endl; // Output: 100
    return 0;
}
