/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int a[26];
map <string , int > m;
int main ()
{
    int n,i,x=0,y=0,j,k;
    string s,ss;
    cin>>s;
    n=s.size();
    //cout<<s<<endl;

   /* for(i=0; i<n; i++)
        a[s[i]-'a']++;*/
    for(i=0; i<n; i++)
    {
        ss="";
        //cout<<ss<<endl;
        for(j=i,k=0;k<n;k++, j++)
        {
            ss+=s[j];
            if(j+1==n)
                j=-1;
        }
        //cout<<endl;
        if(m[ss]==0)
        {
            m[ss]++;
            x++;
        }
    }
    cout<<x<<endl;

    return 0;
}

/***

// below code is taken from Forhadullah Mejhba Vai 

// study about SET in STL
 /*
 * Biborno
 * fb.com/mfmejbah
 * fmejbah@gmail.com
 *
 * A
 * Date: 18 Dec 2016
 ******/
/***
#include <bits/stdc++.h>

using namespace std;

int main()
{
  //freopen("A.in", "r", stdin);
  //freopen("A.out", "w", stdout);
  string s; cin >> s;
  set<string> st;
  st.insert(s);
  for( int i = 1; i < s.length(); i++ ) {
    string a = s.substr(s.length() - i, i) + s.substr(0,s.length() - i);
    st.insert(a);
  }
  cout << (int)st.size();
}
 *****/
