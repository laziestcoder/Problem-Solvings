#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    return a<b;
}

int main()
{
    vector<int>v1;
    int n, i, x;
    cout<<"size of vector in the beginning : "<<v1.size()<<endl;
    cout<<"how many elements : ";
    cin>>n;
    cout<<"input elements : ";
    for(i=0;i<n;i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    cout<<"vector size now : "<<v1.size()<<endl;
    cout<<"elements of the vector : ";
    for(i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    sort(v1.begin(),v1.end(),cmp);
    cout<<"after sorting the elements of the vector : ";
    for(i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    v1.clear();
    cout<<"size of vector after clearing : "<<v1.size();
    return 0;
}
