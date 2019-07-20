#include<iostream>
using namespace std;

void area(int length, int width)
{
    cout << length * width << endl;
}
void area(double r)
{
    cout << 3.1416 * r * r << endl;
}
int main()
{
    area(15,12);
    area(10.0);
    return 0;
}
