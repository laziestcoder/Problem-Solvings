#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>

using namespace std;

#define  mem(x,y) memset(x,y,sizeof(x))
#define sn scanf
#define pf printf
#define pb push_back

typedef long long int ll;



int main()
{
    int n;
    string ss,cur;
    stack<string>S;
    sn("%d",&n);
    while(n--)
    {
        cin>>ss;
        if(ss=="Sleep")
        {
            cin>>cur;
            S.push(cur);
        }
        else if(ss=="Kick"&&S.size()>0)
        {
            S.pop();
        }
        else if(ss=="Test")
        {
            if(S.size()==0)
                cout<<"Not in a dream"<<endl;
            else
                cout<<S.top()<<endl;
        }
    }

    return 0;
}
