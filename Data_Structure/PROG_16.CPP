// Binary Search
#include<iostream>
using namespace std;
int main()
{
    int data[14],i,lb,ub,item,loc,beg,end,mid;
    for(i=1;i<=13;i++)
    {
        cin >> data[i];
    }
    cout << "Enter Item to Find : " << endl;
    cin >> item;
    lb=1;
    ub=13;
    beg=lb;
    end=ub;
    mid=(beg+end)/2;

    while(beg<=end&&data[mid]!=item)
    {
        if(item<data[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(beg+end)/2;
    }

    if(data[mid]==item)
        loc=mid;
    else
        loc=0;
    if(loc==0)
        cout << "Not Found";
    else
        cout <<"Found at : " << loc;
    return 0;
}
