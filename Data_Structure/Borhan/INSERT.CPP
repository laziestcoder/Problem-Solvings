#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{
    int a[101],l,i,n,j,k, v;

    cout<<"Enter Number Of Elemets of Array <1-100>\n";
    cin>>n;
    cout<<"\nEnter The Elemets\n";

    for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
    cout<<"Enter The Position To Instrt A Value\n";
    cin>>k;
     if(k>n)
        cout<<"Wrong Input\n";

    cout<<"Enter The Value\n";
    cin>>v;

    for(l=n;l>=k;l--)
        {
            a[l+1]=a[l];
        }
        a[k]=v;

    cout<<"After Inserted\n";

    for(i=1;i<=n+1;i++)
        {
            cout<<a[i]<<"\n";
        }







}
