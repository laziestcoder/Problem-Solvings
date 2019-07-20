#include<bits/stdc++.h>

using namespace std;

bool cmp(string a, string b)
{
    return a<b;
}

int main()
{
    vector<string>v4;
    int n, i;
    string str;
    cout<<"how many strings : ";
    cin>>n;
    cout<<"input "<<n<<" strings :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>str;
        v4.push_back(str);
    }
    sort(v4.begin(),v4.end(),cmp);
    cout<<"after sorting : "<<endl;
    for(i=0;i<n;i++)
        cout<<v4[i]<<endl;
    return 0;
}
