#include <iostream> //INLINE FUNCTION
using namespace std;

inline float mul(float x,float y)
{
    return(x*y);
}

inline double div(double p,double q)
{
    return(p/q);
}

int main()
{
    float a=12.345;
    float b=9.82;

    cout << mul(a,b) << endl;

    cout << div(a,b) << endl;

return 0;
}
