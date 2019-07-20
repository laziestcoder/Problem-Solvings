#include<bits/stdc++.h>
using namespace std;
int a[100];
int Partition(int p,int r)
{
    int x=a[r];
    int i=p-1;
    int j;
    for(j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
            i=i+1;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return (i+1);
}
int QuickSort(int p,int r)
{
    int q;
    if(p<r)
    {
        q=Partition(p,r);
        QuickSort(p,q-1);
        QuickSort(q+1,r);
    }
}
int main()
{
    int n;
    cout<<"How many numbers:";
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    {
        a[i]=rand()%100;
    }
    cout<<"Input Array: ";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    int p=1,r=n;
    QuickSort(p,r);
    cout<<"\n\nSorted Array: ";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
