#include<bits/stdc++.h>
using namespace std;
int a[1000];
int n,ahs;
int left(int i)
{
    return (2*i);
}
int right(int i)
{
    return (2*i+1);
}
int Max_Heapify(int i)
{
    int l=left(i);
    int r=right(i),lar;
    if(l<=ahs  && a[l]>a[i])
    {
        lar=l;
    }
    else
    {
        lar=i;
    }
    if(r<=ahs && a[r]>a[lar])
    {
        lar=r;
    }
    if(lar!=i)
    {
        swap(a[i],a[lar]);
        Max_Heapify(lar);
    }
}
int Build_mx_heap()
{
    srand(time(NULL));
    cout<<"How many numbers:";
    cin>>n;
    int i,al=n;
    ahs=n;
    for(i=1;i<=n;i++)
    {
        a[i]=rand()%100;
       //cin>>a[i];
    }
    cout<<"Input:";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=al/2;i>=1;i--)
    {
        Max_Heapify(i);
    }
    int c;
    cout<<"\n\nMaxHeap:";
    for(c=1;c<=n;c++)
    {
        cout<<a[c]<<" ";
    }
}
int main()
{
    Build_mx_heap();
    int i;
    int al=n;
    for(i=al;i>=2;i--)
    {
        swap(a[1],a[i]);
        ahs=ahs-1;
        Max_Heapify(1);
    }
    cout<<"\n\nOutput:";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
