
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        map < string, int > name;
        int k;
        cin>>k;
        int mx=0;
        while(k--)
        {
            string a;
            cin>>a;
            name[a]++;
        }
        printf("Case %d: ",i);
        map < string , int > :: iterator it;
        for(it = name.begin(); it != name.end(); it++) {
              if(it->second > mx)
                mx = it->second;
            }
            for(it = name.begin(); it != name.end(); it++) {
              if(it->second == mx)
                {
                    cout<<it->first<<endl;
                    break;
                }
            }
    }
    return 0;
}
