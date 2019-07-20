#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m,i,k,mx,j,id,cn=0;
    cin>> n >> m;
    string s[n];
    int p[n], r[m];
//    vector < pair < int, int > > s[n];
    for(i=0; i<n; i++)
    {
        //cin >> s >>s[i].first >> s[i].second;
        cin>> s[i] >> r[i] >> p[i];
    }
    for(k=1; k<=m; k++)
    {
        mx=0;
        cn=0;
        for(j=0; j< 1 ; j++)
        {
            for(i=0; i<n; i++)
            {
                if(r[i] == k )
                {
                  if(mx<p[i])
                    {
                        mx=p[i];
                        id=i;
                    }

                  else if(mx==p[i])
                      cn++;
                }
            }
            if(cn<3)
             cout<< s[id] <<" ";
            else
            {
                cout<<"?"<<endl;
                break;
            }
            p[id]=0;
            id=-1;
            mx=0;
        }
        cout<<endl;
    }

    return 0;
}
