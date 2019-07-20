#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    int i=0,j=0;

    while( a[i]=='0' && i<a.size())
        i++;
    while( b[j]=='0' && j<b.size())
        j++;

    if(a.size()-i> b.size()-j )
        cout<<">\n";
    else if(a.size()-i < b.size()-j )
        cout<<"<\n";
      else
      {
          for(; i<a.size(); i++,j++)
          {
              if(a[i] > b[j])
              {
                  cout<<">\n";
                  return 0;
              }
              else if(a[i] < b[j])
              {
                  cout<<"<\n";
                  return 0;
              }
          }
          cout<<"=\n";
      }
      return 0;
}
