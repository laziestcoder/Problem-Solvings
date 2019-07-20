#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int i,j, a,b;
    long long x[105][105],min,max;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            cin>>x[i][j];
        }
    }
    max=0;
    for(i=1; i<=a; i++)
    {
        min=10000000000;
        for(j=1; j<=b; j++)
        {
            if(x[i][j]<min)
                min=x[i][j];
        }
        if(max<min)
            max=min;
    }
    cout<< max;

    return 0;
}
