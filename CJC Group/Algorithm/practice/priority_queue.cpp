#include<bits/stdc++.h>
using namespace std;
int n;
int ahs,al,l;
int heap_max(int A[])
{
    return A[1];
}
int parent( int i)
{
    return(i/2);
}
int left(int i)
{
    return(2*i);
}
int right(int i)
{
    return(2*i+1);
}
int Max_Heapify(int A[],int i)
{
    int largest;
    int l=left(i);
    int r=right(i);
    if(l<=ahs && A[l]>A[i])
    {
        largest=l;
    }
    else
        largest=i;
    if(r<=ahs && A[r]>A[largest])
    {
        largest=r;
    }
    int s;
    if(largest!=i)
    {
        s=A[i];
        A[i]=A[largest];
        A[largest]=s;
        Max_Heapify(A,largest);
    }
}
int Build_mx_heap(int A[])
{
    int c,i;
    srand(time(NULL));
    cout<<"How many elements:"<<"\n";
    cin>>n;
    for(c=1; c<=n; c++)
    {
        A[c]=rand()%100;
        //scanf("%d",&A[c]);
    }
    printf("Given Array: ");
    for(c=1; c<=n; c++)
    {
        printf("%d ",A[c]);
    }
    al=n;
    ahs=n;
    for(i=al/2; i>=1; i--)
    {
        Max_Heapify(A,i);
    }
    printf("\n\nMAx Heap:");
    for(c=1; c<=n; c++)
    {
        printf("%d ",A[c]);
    }
    l=n;
}
int heap_extract_max(int A[])
{
    int max;
    //l=n;//strlen(A);
    if(l<1)
        cout<<"heap underflow\n";
    max=A[1];
    A[1]=A[l];
    l=l-1;
    Max_Heapify(A,1);
    return max;
}
int Heap_increase_key(int A[], int i, int key)
{
    if(key<A[i])
        cout<<"EROR-new key is smaller than current key";
    A[i]=key;
    while((i>1) && (A[parent(i)]<A[i] ))
    {
        swap(A[i],A[parent(i)]);
             i=parent(i);
    }
}
int Max_heap_ins(int A[],int key)
{
    //l=n;
    l=l+1;
    A[l]=-(1>>30);
    Heap_increase_key(A,l,key);
}
int Display(int A[])
{
    int c;
    //int l=sizeof(A)/sizeof(A[0]);
   // cout<<"---"<<l;
    for(c=1; c<=l; c++)
    {
        printf("%d ",A[c]);
    }
}
int main()
{
    int A[100],t,key;
    Build_mx_heap(A);
    while(1)
    {
        cout<<"\n1.Insert\n2.Extract\n";
        cout<<"Enter a choice:";
        cin>>t;
        if(t==1)
        {
            cout<<"\nEnter number";
            cin>>key;
            Max_heap_ins(A,key);
            //n=n+1;
            Display(A);
        }
        if(t==2)
        {
            heap_extract_max(A);
            Display(A);
        }
    }
}
