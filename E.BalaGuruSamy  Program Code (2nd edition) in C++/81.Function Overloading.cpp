#include <iostream> //FUNCTION OVERLOADING

using namespace std;

int volumn(int);
double volumn(double,int);
long volumn (long,int,int);

int main()
{
    cout << volumn(10) << endl;
    cout << volumn(2.5,8) << endl;
    cout << volumn(100L,75,15);

return 0;
}

int volumn(int s)
{
    return(s*s*s);
}

double volumn(double r,int h)
{
    return(3.14519*r*r*h);
}

long volumn (long l,int b,int h)
{
    return(l*b*h);
}
