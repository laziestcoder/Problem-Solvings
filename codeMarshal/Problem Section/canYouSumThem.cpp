#include<iostream>
using namespace std;
int main()
{
    int a,n,i,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(!(i%2))sum+=a;
    }
    cout<<sum<<endl;
    return 0;

}
