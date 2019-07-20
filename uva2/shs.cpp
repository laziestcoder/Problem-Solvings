#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int d1,d2,d3,x,y;
    cin>>d1>>d2>>d3;
    if(d1==d2 && d1==d3)
        cout << (d1+d2+d3) << endl;

    else if (d1!=d2 || d2!=d3 || d1!= d3)
    {
        if(d1<=d3)
            x=d1;
        else
            x=d3;
        if(d2<=d3)
            y=d2;
        else
            y=d3;

        cout<<(x+y)*2<<endl;
    }

    return 0;
}
