#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, a[10], b[10], f = 0;
    while(1)
    {
        for(i=1; i<=5; i++)
            cin>>a[i];
        for(i=1; i<=5; i++)
            cin>>b[i];
        for(i=1; i<=5; i++)
        {
            if(a[i]==b[i])
            {
                f = 0;
            }
            else
                f = 1;
        }
        if(f==0)
        {
            cout<<"N"<<endl;
        }
        else if(f==1)
        {
            cout<<"Y"<<endl;
        }
    }
    return 0;

}

