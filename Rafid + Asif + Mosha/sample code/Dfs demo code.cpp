#include <bits/stdc++.h>
using namespace std;

#define M 55
vector<int> ans, depends[M];
int taken[M];
//depends[i] contains sll items that item i is depending
//when taken[i] = 1 , that mean's already taken

void take(int p)
{
    if(!taken[p]){
        // i am taking all the items that i should take before p
        for(int i = 0; i<depends[p].size(); i++)
            take(depends[p][i]);
        ans.push_back(p);
        taken[p] = 1;//now i can take it
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)take(i);
    for(int i = 0;i<n;i++)cout<<ans[i]<<endl;
}
