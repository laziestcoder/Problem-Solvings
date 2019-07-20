// H.W
#include<iostream>
using namespace std;
template<typename w>
w m(w a,w b)
{
    if(a<b)
        return a;
    else
        return b;
}

int main()
{
    cout << m(3,4) << endl;
    cout << m('c','a') << endl;
    return 0;
}
