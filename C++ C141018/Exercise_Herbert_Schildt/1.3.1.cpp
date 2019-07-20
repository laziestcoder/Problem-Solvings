#include <iostream>
using namespace std;

int main()
{
    float hour,wage,gross;
    cout << "Enter the Employee's Hours and Wage: ";
    cin >> hour >> wage;
    gross = hour * wage;
    cout << "Employee's gross pay: ";
    cout << gross << "\n";
    return 0;
}
