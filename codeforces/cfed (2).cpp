#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int x1,x2,y1,y2,d1,d2,v;
    cin>> x1 >>y1>>x2>>y2;
    d1=abs(x1-x2);
    d2=abs(y1-y2);
    v=max(d1,d2);
    cout<<v<<endl;

    return 0;
}
