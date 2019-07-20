#include<iostream>

using namespace std;

template<class X>
X maximum(X a, X b)
{
    if (a>b)
        return a;
    else
        return b;
}

int main()
{
    cout<<maximum(10,2)<<endl;
    cout<<maximum(1.2,33.4)<<endl;
}
