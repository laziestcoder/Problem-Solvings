#include<iostream> //Avarage of Two Numbers-(Page-23)

using namespace std;

int main()
{
    float number1,number2,
    sum,avarage;

    cout << "Enter Your first Number  : ";
    cin >> number1;
    cout << "Enter Your secand Number : ";
    cin >> number2;

    sum = number1 + number2;
    avarage = sum/2;

    cout << "Sum:" << sum << endl;
    cout << "Avarage:" << avarage << endl;

return 0;
}
