#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
#include<string.h>
#include<sstream>
#include<cctype>
#include<cstring>

using namespace std;

int main()
{
int x,c,d,e,f,i,j,k;
string s[100],g,h;
map<string,int>nt;
k=1;
while(cin>>x)
    {
    for(i=1;i<=x;i++)
        {
        cin>>s[i];
        nt[s[i]]=0;
        }
    for(i=1;i<=x;i++)
        {
        cin>>g;
        cin>>c>>d;
        if(d!=0) {e=c/d;
                    f=e*d;

        for(j=1;j<=d;j++)
            {
            cin>>h;
            nt[h]+=e;
            }
        nt[g]-=f;
        }
        }
    if(k!=1) cout<<endl;
    for(i=1;i<=x;i++)
        {
        cout<<s[i]<<" "<<nt[s[i]]<<endl;
        }
    k++;
    }
return 0;
}
