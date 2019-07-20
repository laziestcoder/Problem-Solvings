#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{
    int a[101], n ,i,j,k,v,l;

    cout<<"Enter Number Of Elements Of The Array <1-100>\n";
    cin>>n;

    cout<<"Enter The Elements\n";

    for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
    cout<<"Enter The Position To Delete An Element\n";

    cin>>k;

    if(k>n)
        cout<<"Wrong Input\n";

    for(l=k;l<=n;l++)
        {
            a[l]=a[l+1];
        }


    cout<<"After Delete\n";
    for(i=1;i<=n-1;i++)
        {
            cout<<a[i]<<"\n";
        }












}
