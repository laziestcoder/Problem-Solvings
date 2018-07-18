#include<iostream>
using namespace std;

int main()
{
    int i,j,t;
    int a[15];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":\n";
        for(j=1;j<=10;j++)
        {
             cout<<a[i]<<" * "<<j<<" = "<<a[i]*j<<endl;

        }
    }
    return 0;

}
