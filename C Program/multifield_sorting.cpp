#include<bits/stdc++.h>

using namespace std;

class data
{
    public:
    int math, eng, bng, total, roll;
};

bool cmp(data a, data b)
{
    if(a.total!=b.total)
        return a.total>b.total;
    else if(a.math!=b.math)
        return a.math>b.math;
    else if(a.eng!=b.eng)
        return a.eng>b.eng;
    else
        return a.roll<b.roll;
}

int main()
{
    data temp;
    int n, i, x;
    vector<data>v5;
    cout<<"how many students : ";
    cin>>n;
    cout<<"input roll, marks of math, english, bangla :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>temp.roll>>temp.math>>temp.eng>>temp.bng;
        temp.total=temp.math+temp.eng+temp.bng;
        v5.push_back(temp);
    }
    sort(v5.begin(),v5.end(),cmp);
    cout<<"after sorting :\n";
    cout<<"roll math english bangla total\n";
    for(i=0;i<n;i++)
    {
        cout<<setw(4)<<v5[i].roll<<" ";
        cout<<setw(4)<<v5[i].math<<" ";
        cout<<setw(7)<<v5[i].eng<<" ";
        cout<<setw(6)<<v5[i].bng<<" ";
        cout<<setw(5)<<v5[i].total<<" ";
        cout<<endl;
    }
    return 0;
}
