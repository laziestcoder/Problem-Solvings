#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pii;

#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
#define ff first
#define ss second
#define ms(a,b) memset(a,b,sizeof a)
#define inf 1000000009

int main()
{
    char pad[4][4];
    map<char,pii> pos;
    ms(pad,'x');
    int nm=1;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            pad[i][j]='0'+nm;
            pos['0'+nm]=pii(i,j);
            nm++;
        }
    }
    pad[3][1]='0';
    pos['0']=pii(3,1);
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool ok=false;
    vector<pii> v;
    for(int i=1; i<s.size(); i++)
    {
        int x=pos[s[i]].ff-pos[s[i-1]].ff;
        int y=pos[s[i]].ss-pos[s[i-1]].ss;
        v.pb(pii(x,y));
    }
    //for(int i=0;i<v.size();i++) {
    //    cout<<v[i].ff<<' '<<v[i].ss<<endl;
    //}
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            int cnt=0;
            int a=i;
            int b=j;
            if(pad[a][b]==s[0] || pad[a][b]=='x') continue;
            //vector<char> dbg;
            //dbg.pb(pad[a][b]);
            for(int k=0; k<v.size(); k++)
            {
                if(a+v[k].ff>=0 && a+v[k].ff<4 && b+v[k].ss>=0 && b+v[k].ss<3)
                {
                    if(pad[a+v[k].ff][b+v[k].ss]!='x')
                    {
                        //dbg.pb(pad[a+v[k].ff][b+v[k].ss]);
                        cnt++;
                        a=a+v[k].ff;
                        b=b+v[k].ss;
                    }
                }
                else break;
            }
            if(cnt==n-1)
            {
                ok=true;
                //for(int i=0;i<dbg.size();i++) cout<<dbg[i];
                //cout<<endl;
                break;
            }
            else continue;
        }
    }
    if(ok) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
