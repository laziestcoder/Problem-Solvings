#include<bits/stdc++.h>
using namespace std;
bool mark[11];
bool flag1,flag2;

int main()
{


    int n;
    cin>>n;
    while(n--)
    {
        char c;
        cin>>c;
       // cout<<c<<endl;
        mark[c-'0']=true;
    }

     if((mark[1]||mark[2]||mark[3])&&(mark[7]||mark[9]))
        flag1=true;
    if((mark[1]||mark[4]||mark[7])&&(mark[3]||mark[6]||mark[9]))
        flag2=true;
    if((mark[1]||mark[2]||mark[3])&&mark[0]){
        cout<<"YES";
        return 0;
    }
    if(flag1&&flag2){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";

    return 0;
}
