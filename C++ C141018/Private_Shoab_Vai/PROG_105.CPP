#include<iostream>
using namespace std;

int main()
{
    int i;
    cout.setf(ios::scientific,ios::floatfield); // e er por 3 digit
    cout.precision(4); // doshomik er por 4 digit
    for(i=1;i<=5;i++) // precision and setf eksathe use korte hobe
        cout << i << " " << 1.0/i << endl;

    return 0;
}
