// Designing Our Own Manipulators, Balaguru: 316 Page
#include<iostream>
#include<iomanip>
using namespace std;

// User-defined manipulators

ostream & currency(ostream & output)
{
    output << "Rs";
    return output;
}

ostream & form(ostream & output)
{
    output.setf(ios::showpos);
  // output.setf(ios::showpoint); // ata lagbe na
    output.fill('*');
    output.precision(2);
    output << setiosflags(ios::fixed) << setw(10);
    return output;
}
int main()
{
    cout << currency << form << 7864.5; // Output: Rs**+7864.50
    return 0;
}
