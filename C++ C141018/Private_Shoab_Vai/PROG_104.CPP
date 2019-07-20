#include<iostream>
using namespace std;

int main()
{
    int i;
    cout.setf(ios::fixed,ios::floatfield); // fixed mane normal doshomik
    cout.precision(4); // doshomik er por 4 digit
    for(i=1;i<=5;i++)
        cout << i << " " << 1.0/i << endl;

    return 0;
}
